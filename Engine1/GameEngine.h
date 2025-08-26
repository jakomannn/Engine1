#pragma once

#include <iostream>
#include <SDL.h>
#include <string.h>
#include <vector>

#include "Player.h"

class Engine {
public:
	Engine();
	void update();
	~Engine();
private:
	std::vector<Player> players;
};