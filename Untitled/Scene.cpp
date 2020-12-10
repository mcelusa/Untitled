#include "Scene.h"

Scene::Scene()
{

	currentScene = SCENE::INIT;
	
}

void Scene::Update()
{

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
}

void Scene::LoadScene()
{
}

void Scene::TitleScene()
{
}

void Scene::GameScene()
{
}
