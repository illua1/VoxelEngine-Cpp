#ifndef SRC_ENGINE_H_
#define SRC_ENGINE_H_

#include <string>
#include <memory>
#include <stdexcept>
#include "typedefs.h"
#include "settings.h"

class Assets;
class Level;
class Screen;
class Content;

namespace gui {
	class GUI;
}

class initialize_error : public std::runtime_error {
public:
	initialize_error(const std::string& message) : std::runtime_error(message) {}
};

class Engine {
	Assets* assets;
	std::shared_ptr<Screen> screen = nullptr;
	EngineSettings& settings;
	Content* content;

	uint64_t frame = 0;
	double lastTime = 0.0;
	double delta = 0.0;

	gui::GUI* gui;
public:
	Engine(EngineSettings& settings, Content* content);
	~Engine();

	void updateTimers();
	void updateHotkeys();
	void mainloop();

	Assets* getAssets();
	gui::GUI* getGUI();
	EngineSettings& getSettings();
	void setScreen(std::shared_ptr<Screen> screen);

	const Content* getContent() const;
};

#endif // SRC_ENGINE_H_