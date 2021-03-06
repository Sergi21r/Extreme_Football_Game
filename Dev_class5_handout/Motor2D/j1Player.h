#ifndef _j1PLAYER_H_
#define _j1PLAYER_H

#include "j1Module.h"
#include "p2List.h"
#include "p2Point.h"
#include "j1Textures.h"

enum STATUS {
	STEADY,
	JUMPING,
	WALKING,
	FALLING
};

enum STATUS2 {
	AIR,
	FLOOR
};



class j1Player :public j1Module {
public:
	j1Player();
	~j1Player();
	// Called before render is available
	bool Awake(pugi::xml_node&);

	// Called before the first frame
	bool Start();


	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

	// Load 
	bool Load(pugi::xml_node&);



	void Draw();



	fPoint				position;


private:
	p2SString name = nullptr;


	SDL_Texture* graph = nullptr;

	STATUS status;
	STATUS2 status2;





};



#endif
