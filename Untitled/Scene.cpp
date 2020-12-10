#include "Scene.h"

Scene::Scene()
{

	currentScene = SCENE::INIT;
	
}

void Scene::Update()
{
	if(input != nullptr) input->Update();
	
	switch (currentScene) {

	case SCENE::INIT:

		InitScene();

		break;
	case SCENE::LOAD:

		LoadScene();

		break;
	case SCENE::TITLE:

		TitleScene();

		break;
	case SCENE::GAME:

		GameScene();

		break;
		
	}

	
}

void Scene::InitScene()
{

	input = new Input;

	player = new Player(100, 100, 0.5);
	
	currentScene = SCENE::TITLE;
	
}

void Scene::LoadScene()
{
}

void Scene::TitleScene()
{

	player->Update(input);
	player->Draw();
	
}

void Scene::GameScene()
{
}
