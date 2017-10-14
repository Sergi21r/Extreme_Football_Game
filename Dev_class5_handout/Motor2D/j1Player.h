#ifndef _j1PLAYER_H_
#define _j1PLAYER_H

#include "j1Module.h"
#include "p2List.h"
#include "p2Point.h"



class j1Player :public j1Module {
public:
	j1Player();
	~j1Player();



private:
	p2SString name;
	unsigned int width;
	unsigned int height;

};
	


#endif
