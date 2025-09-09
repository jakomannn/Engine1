#pragma once

#include <iostream>
#include <SDL.h>
#include <string.h>

#include "Player.h"


class GameEngine {
public:
	GameEngine() = default;
	GameEngine(SDL_Renderer* r);

	void updatePlayer(SDL_Event* event);
	void framesEventsHandler();
	void renderScreen();

	~GameEngine() = default;
private:
	Player player;
	SDL_Texture* playerTexture;
	SDL_Renderer* renderer;
};