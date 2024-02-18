#pragma once
#include<SDL.h>
#include<SDL_image.h>
#include<iostream>
#include"TextureManager.h"
using namespace std;

class Game {
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	int currentFrame;
	int spriteX = 0, spriteY = 0;
	int currentRow;

};