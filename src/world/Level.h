#ifndef WORLD_LEVEL_H_
#define WORLD_LEVEL_H_

#include "../typedefs.h"
#include "../settings.h"

class Content;
class ContentIndices;
class World;
class Player;
class Chunks;
class LevelEvents;
class Lighting;
class PhysicsSolver;
class ChunksController;
class ChunksStorage;
class PlayerController;

class Level {
public:
	World* world;
	const Content* const content;
	const ContentIndices* const contentIds;
	Player* player;
	Chunks* chunks;
	ChunksStorage* chunksStorage;
	PhysicsSolver* physics;
	Lighting* lighting;
	ChunksController* chunksController;
	PlayerController* playerController;
	LevelEvents* events;
	const EngineSettings& settings;

	Level(World* world, 
		  const Content* content,
	      Player* player, 
	      EngineSettings& settings);
	~Level();

	void updatePlayer(float delta, 
					  bool input, 
					  bool pause, 
					  bool interactions);

	void update();
};

#endif /* WORLD_LEVEL_H_ */
