#pragma once
#include "Input.h"

class Player
{

public:

	Player(float x, float y, float size, float speed = 5, float angle = 0);
	void Draw();
	void Update(Input *input);
	void Move(Input* input);
	

private:

	float x;
	float y;
	float size;
	float speed;
	float angle;
	float angleEnd;
	
	int rocketGraph;
	int shieldGraph;
	int wingGraph;

	bool isAlive;

};

