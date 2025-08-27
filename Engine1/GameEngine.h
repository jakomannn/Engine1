#pragma once

#include <iostream>
#include <SDL.h>
#include <string.h>

#include "Player.h"


class GameEngine {
public:
	GameEngine() = default;
	void updatePlayer(SDL_Event* event);
	~GameEngine() = default;
private:
	Player player;
};