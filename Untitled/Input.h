#pragma once
#include "Define.h"

class Input
{

public:

	Input();
	void Update();
	bool Click();
	
private:

	static char keys[];
	static char oldkeys[];
	
};

