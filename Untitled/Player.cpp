#include "Player.h"
#include <DxLib.h>
#include <cmath>

Player::Player(float x, float y, float size, float speed, float angle) :
	x(x),
	y(y),
	size(size),
	speed(speed),
	angle(angle)
{

	rocketGraph = LoadGraph("rocket.png");
	wingGraph = LoadGraph("rocket_wing.png");
	isAlive = true;
	
}

void Player::Draw()
{

	DrawRotaGraph(x, y, size, angle, rocketGraph, true);
	DrawRotaGraph(x, y, size, angle, wingGraph, true);
	
}

void Player::Update(Input* input)
{

	Move(input);
	
}

void Player::Move(Input *input)
{
	int mousex;
	int mousey;
	double z;
	double zz;
	
	if(input->Click()) {
		
		speed = 10;
		
	}
	else {

		if(input->GetIsClick()) {

			if (speed > 0) {

				mousex = input->GetMouseXPos() - x;//camX);
				mousey = input->GetMouseYPos() - y;  //camY);

				z = atan2(mousey, mousex);
				zz = sqrt((mousex * mousex) + (mousey * mousey));
				
				x -= (mousex / zz) * speed;
				y -= (mousey / zz) * speed;
				speed--;

			}
		}
		
	}

	
}
