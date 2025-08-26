#pragma once

#include <iostream>
#include <SDL.h>
#include <string.h>

class Player {
public:
	Player();

	void move();
	void attack();

	~Player();
private:
	std::string name;
	SDL_Rect hitbox;
	SDL_Texture* texture;
	int moveSpeed;
	int x, y;
};