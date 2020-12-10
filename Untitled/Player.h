#pragma once
class Player
{

public:

	Player();
	void Draw();
	void Update();

private:

	float x;
	float y;
	float size;
	float speedX;
	float speedY;
	float angle;
	float angleEnd;
	
	int rocketGraph;
	int shieldGraph;
	int wingGraph;

	

	
};

