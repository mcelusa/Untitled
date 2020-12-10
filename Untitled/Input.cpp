#include "Input.h"

char Input::keys[256] = { 0 };
char Input::oldkeys[256] = { 0 };

Input::Input()
{

	isClick = false;
	
}

void Input::Update()
{

	for (int i = 0; i < 256; i++) oldkeys[i] = keys[i];
	GetHitKeyStateAll(keys);
	GetMousePoint(&mouseX, &mouseY);
	
}

bool Input::Click()
{

	if (GetMouseInput() & MOUSE_INPUT_LEFT)
	{
		isClick = true;
		return 1;
	}
	else return 0;
	
}
