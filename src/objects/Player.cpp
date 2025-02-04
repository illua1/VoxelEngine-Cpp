#include "Player.h"
#include "../physics/Hitbox.h"
#include "../physics/PhysicsSolver.h"
#include "../voxels/Chunks.h"
#include "../window/Events.h"

#include <glm/glm.hpp>

Player::Player(glm::vec3 position, float speed, Camera* camera) :
		speed(speed),
		camera(camera),
		choosenBlock(1),
		camX(0.0f), camY(0.0f){
	hitbox = new Hitbox(position, vec3(0.3f,0.9f,0.3f));
}

Player::~Player(){
	delete hitbox;
}

void Player::teleport(glm::vec3 position) {
	hitbox->position = position;
}
