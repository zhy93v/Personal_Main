#pragma once
class Game
{

public:

	// ������
	Game();
	//�Ҹ���
	~Game();

public:
	void Init(HWND hwnd);
	void Update();
	void Render();

private:
	HWND _hwnd = {};
	HDC _hdc = {};

};

