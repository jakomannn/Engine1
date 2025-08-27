#include "Game.h"

void Game::run() {
	// Running already makes us know we are in game
	while (running) {
		// TODO: write all not player actions cases

		while (SDL_PollEvent(&event)) {

			switch (event.key.keysym.sym) {
			case SDLK_ESCAPE:
				this->quitEngine();
				// TODO: write quitEngine and perform some actions here
				break;
			default:
				engine.updatePlayer(&event);
				break;
			}

		}
		
		// TODO: add not only player things
		
	}
}

// TODO: write it already
void Game::quitEngine() {
	return;
}