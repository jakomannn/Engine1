#include "GameEngine.h"

void GameEngine::updatePlayer(SDL_Event* event) {
	// Updating and performing all player actions
	switch (event->type) {
	case SDL_KEYDOWN:
		if (event->key.keysym.sym == SDLK_a) {
			player.increaseMovespeed(-1);
			player.move();
		}
		else if (event->key.keysym.sym == SDLK_d) {
			player.increaseMovespeed(1);
			player.move();
		}
	}
	return;
}

