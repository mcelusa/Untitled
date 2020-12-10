#pragma once
#include "Define.h"
#include "Player.h"
#include "Input.h"

class Scene
{

public:

	Scene();
	void Update();
	void InitScene();
	void LoadScene();
	void TitleScene();
	void GameScene();
	
private:

	SCENE currentScene;
	
	bool isLoad = false;

	Player* player;

	Input* input;
	
};

