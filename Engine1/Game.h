#pragma once

#include <iostream>
#include <SDL.h>
#include <string.h>

#include "GameEngine.h"

class Game {
public:
	Game() = default;
	void run();
	void quitEngine();
	~Game() = default;
private:
	GameEngine engine;
	SDL_Window* window = SDL_CreateWindow("game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
	int running = 1;
	SDL_Event event;
};