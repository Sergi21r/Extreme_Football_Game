#ifndef _j1PLAYER_H_
#define _j1PLAYER_H

#include "j1Module.h"
#include "p2List.h"
#include "p2Point.h"



class j1Player :public j1Module {
public:
	j1Player();
	~j1Player();
	// Called before render is available
	bool Awake();

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









private:
	p2SString name;
	unsigned int width;
	unsigned int height;







};
	


#endif
