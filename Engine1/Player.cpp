#include "Player.h"

// TODO: make it more smooth (add some physics)
void Player::increaseMovespeed(int num) {
	moveSpeed += num;
}

void Player::move() {
	x += moveSpeed;
	std::cout << "player moved for " << moveSpeed;
}

