#pragma once

#include <iostream>
#include <vector>
#include <SDL.h>

#include "Blocks.h"

class World {
public:
	World();

	void generateWorld();

	~World();
private:
	std::vector<std::vector<Block>> blocks;
};