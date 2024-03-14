#pragma once
class Game
{

public:

	// 持失切
	Game();
	//社瑚切
	~Game();

public:
	void Init();
	void Update();
	void Render();

private:
	HWND _hwnd = {};
	HDC _hdc = {};

};

