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

#include "SDL_image/include/SDL_image.h"
#pragma comment( lib, "SDL_image/libx86/SDL2_image.lib" )

j1Player::j1Player() : j1Module(){
	name.create("player");
}

j1Player::~j1Player(){
}

bool j1Player::Awake(pugi::xml_node&) {
	bool ret=true;
	position.x = 0;
	position.y = 283;

	return ret;
}

bool j1Player::Start() {
	bool ret = true;
	graph=App->tex->Load("maps/person1.png");
	status = STEADY;
	status2 = FLOOR;



	return ret;
}

bool j1Player::PreUpdate() {





	return true;
}

bool j1Player::Update(float dt) {
	//Input();
	if (App->map->IsCollision(position.x,position.y) == false) position.y += 2;
	//right
	if (App->input->GetKey(SDL_SCANCODE_D) == KEY_REPEAT || App->input->GetKey(SDL_SCANCODE_D) == KEY_DOWN) {
		if (status2 == FLOOR) {
			position.x += 5;
			status = WALKING;
		}
		else if (status2 == AIR) {
			position.x += 5;
		}
	}
	if (App->input->GetKey(SDL_SCANCODE_D) == KEY_UP && status2==FLOOR) {
		status = STEADY;
	}

	//left
	if (App->input->GetKey(SDL_SCANCODE_A) == KEY_REPEAT || App->input->GetKey(SDL_SCANCODE_A) == KEY_DOWN) {
		if (status2 == FLOOR) {
			position.x -= 5;
			status = WALKING;
		}
		else if (status2 == AIR) {
			position.x -= 5;
		}
	}
	if (App->input->GetKey(SDL_SCANCODE_A) == KEY_UP && status2 == FLOOR) {
		status = STEADY;
	}
	
	//jump
	if (App->input->GetKey(SDL_SCANCODE_SPACE) == KEY_DOWN && status2 == FLOOR) {
		if (status != JUMPING) {
			position.y -= 15;
			status = JUMPING;
		}
	}


	return true;
}

bool j1Player::PostUpdate() {
	Draw();

	return true;
}

bool j1Player::CleanUp() {




	return true;
}


bool j1Player::Load(pugi::xml_node& data)
{
	


	return true;
}


/*bool j1Player::Save(pugi::xml_node& data) const
{
	



	return true;
}*/

/*void j1Player::Input() {

}*/

void j1Player::Draw() {
	SDL_Rect r;
	r.x = 0;
	r.y = 0;
	r.h = 62;
	r.w = 38;

	App->render->Blit(graph, position.x, position.y, &r);



}

/*bool j1Player::Falling() {
	bool isCollision = App->map->IsCollision(position.x, position.y);
	if (isCollision == true) {
		return false;
	}
	else if(isCollision == false) {
		return true;
	}
}*/

/*void j1Player::Jumping() {

}*/