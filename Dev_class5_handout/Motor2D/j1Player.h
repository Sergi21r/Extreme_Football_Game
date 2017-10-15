#ifndef _j1PLAYER_H_
#define _j1PLAYER_H

#include "j1Module.h"
#include "p2List.h"
#include "p2Point.h"
#include "j1Textures.h"
#include "j1Animation.h"

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


<<<<<<< HEAD
public:
=======
private:
	p2SString name=nullptr;
	
>>>>>>> e7c285883c54c8704668d95bf6a74269d0167059
	
	p2SString name = nullptr;
	unsigned int width = 0;
	unsigned int height = 0;
	
	Animation* this_animation = nullptr;
	Animation run;
	Animation jump;
	uint gid;
	int speed;


	SDL_Texture* graph = nullptr;

	STATUS status;
	STATUS2 status2;

};
	


#endif
