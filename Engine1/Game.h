#pragma once

#include <iostream>
#include <SDL.h>
#include <string.h>

#include "GameEngine.h"

class Game {
public:
	Game();
	void run();
	void quitEngine();
	~Game() = default;
private:
	
	SDL_Window* window;
	SDL_Renderer* renderer; 
	GameEngine engine;
	int running = 1;
	SDL_Event event;
};