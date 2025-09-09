#include "GameEngine.h"

GameEngine::GameEngine(SDL_Renderer* r) {
	renderer = r;
	playerTexture = SDL_CreateTextureFromSurface(renderer, player.getPlayerModelSurface());
}

void GameEngine::updatePlayer(SDL_Event* event) {
	// Updating and performing all player actions
	switch (event->type) {
	case SDL_KEYDOWN:
		if (event->key.keysym.sym == SDLK_a) {
			player.decreaseMovespeed(0);
			player.increaseMovespeed(-1);
		}
		else if (event->key.keysym.sym == SDLK_d) {
			player.decreaseMovespeed(0);
			player.increaseMovespeed(1);
		}
		break;
	case SDL_KEYUP:
		if (event->key.keysym.sym == SDLK_a) {
			player.decreaseMovespeed(1);
		}
		if (event->key.keysym.sym == SDLK_d) {
			player.decreaseMovespeed(-1);
		}
		break;
	}
	return;
}

void GameEngine::framesEventsHandler() {
	player.move();
	return;
}

void GameEngine::renderScreen() {
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, playerTexture, NULL, player.getRect());


	SDL_RenderPresent(renderer);
	return;
}