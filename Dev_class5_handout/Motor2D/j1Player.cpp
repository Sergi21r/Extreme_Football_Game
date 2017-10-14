#include "j1Player.h"
#include "p2Defs.h"
#include "p2Log.h"
#include "j1App.h"
#include "j1Input.h"
#include "j1Textures.h"
#include "j1Audio.h"
#include "j1Render.h"
#include "j1Window.h"
#include "j1Map.h"
#include "j1Scene.h"

j1Player::j1Player() : j1Module(){
	name.create("player");
}

j1Player::~j1Player(){
}

bool j1Player::Awake() {
	bool ret=true;
	



	return ret;
}

bool j1Player::Start() {
	bool ret = true;
	App->tex->Load("Player_sprites.png");




	return ret;
}

bool j1Player::PreUpdate() {





	return true;
}

bool j1Player::Update(float dt) {

	


	return true;
}

bool j1Player::PostUpdate() {




	return true;
}

bool j1Player::CleanUp() {




	return true;
}