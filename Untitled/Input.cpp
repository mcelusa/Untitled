#include "Input.h"

char Input::keys[256] = { 0 };
char Input::oldkeys[256] = { 0 };

Input::Input()
{	
}

void Input::Update()
{

	for (int i = 0; i < 256; i++) oldkeys[i] = keys[i];
	GetHitKeyStateAll(keys);
	
}

bool Input::Click()
{
	if (GetMouseInput() & MOUSE_INPUT_LEFT) return 1;
	else return 0;
	
}
