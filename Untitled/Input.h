#pragma once
#include "Define.h"

class Input
{

public:

	Input();
	void Update();
	bool Click();

	int GetMouseXPos() { return mouseX; }
	int GetMouseYPos() { return mouseY; }
	
	bool GetIsClick() { return isClick; }
	
private:

	static char keys[];
	static char oldkeys[];

	int mouseX;
	int mouseY;

	bool isClick;
	
};

