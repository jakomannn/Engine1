#include "Player.h"



Player::Player() {
	playerModelSurface = SDL_LoadBMP_RW(SDL_RWFromFile("../../../images/first_idle_model.bmp", "rb"), 0);
	maxPlayerSpeed = 5;
	moveSpeed = 0;
	slowSpeedModifier = 0;
}


// TODO: make it more smooth (add some physics)
void Player::increaseMovespeed(double num) {
	if (moveSpeed + num < maxPlayerSpeed && moveSpeed + num > -maxPlayerSpeed) {
		moveSpeed += num;
	}
	
}

void Player::decreaseMovespeed(double n) {
	slowSpeedModifier = n;
}

void Player::move() {
	// moving
	playerRect.x += moveSpeed;

	//slowing
	if (moveSpeed != 0) {
		moveSpeed += slowSpeedModifier * 0.5;
	}

	std::cout << "player moved for " << moveSpeed << std::endl;
	std::cout << "player is now at " << playerRect.x << " " << playerRect.y << std::endl;
	return;
}

SDL_Rect* Player::getRect() {
	return &playerRect;
}

SDL_Surface* Player::getPlayerModelSurface() {
	return playerModelSurface;
}
