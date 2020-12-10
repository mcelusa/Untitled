#include "DxLib.h"
#include "Scene.h"

const int WINDOW_WIDTH = 320;
const int WINDOW_HEIGHT = 180;

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(true);
	SetMainWindowText("Sample");
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32);
	SetBackgroundColor(15, 35, 42);
	if (DxLib_Init() == -1) return -1;

	Scene* scene = new Scene();
	
	while (true)
	{
		ClearDrawScreen();// ��ʃN���A
		//---------  ��������v���O�������L�q  ----------//

		scene->Update();

		//---------  �����܂łɃv���O�������L�q  ---------//
		ScreenFlip();
		WaitTimer(20);
		if (ProcessMessage() == -1) break;
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) break;
	}

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}
