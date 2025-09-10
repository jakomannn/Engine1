#include "Blocks.h"

Block::Block(const char* surfaceBmpPath) {
	blockSurface = SDL_LoadBMP_RW(SDL_RWFromFile(surfaceBmpPath, "rb"), 0);
	gravity = false;
	collide = true;
}

SDL_Rect* Block::getBlockRect() {
	return &blockRect;
}

SDL_Surface* Block::getBlockSurface() {
	return blockSurface;
}

void Block::enableGravity() {
	gravity = true;
	return;
}

void Block::disableGravity() {
	gravity = false;
	return;
}

void Block::enableCollision() {
	collide = true;
	return;
}
void Block::disableCollision() {
	collide = false;
	return;
}

DirtBlock::DirtBlock() : Block("../../../images/dirt_block.bmp") {
	disableGravity();
	enableCollision();
}

AirBlock::AirBlock() : Block("../../../images/air_block.bmp") {
	disableGravity();
	disableCollision();
}