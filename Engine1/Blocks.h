#pragma once

#include <iostream>
#include <string.h>
#include <SDL.h>

class Block {
public:
	Block() = default;
	Block(const char* surfaceBmpPath);

	SDL_Rect* getBlockRect();
	SDL_Surface* getBlockSurface();

	void enableGravity();
	void disableGravity();

	void enableCollision();
	void disableCollision();

	~Block() = default;
private:
	SDL_Rect blockRect = { 0, 0, 16, 16 };
	SDL_Surface* blockSurface;
	bool gravity;
	bool collide;
};

class DirtBlock : public Block {
public:
	DirtBlock();
	~DirtBlock() = default;
};

class AirBlock : public Block {
	AirBlock();
	~AirBlock() = default;
};