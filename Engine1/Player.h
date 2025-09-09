#pragma once

#include <iostream>
#include <SDL.h>
#include <string.h>

class Player {
public:
	Player();

	void increaseMovespeed(double num);
	void decreaseMovespeed(double n);
	void move();
	void attack();

	SDL_Rect* getRect();
	SDL_Surface* getPlayerModelSurface();

	~Player() = default;
private:
	std::string name;
	SDL_Rect playerRect = {0, 0, 32, 32};
	SDL_Surface* playerModelSurface;
	double moveSpeed, slowSpeedModifier, maxPlayerSpeed;
};