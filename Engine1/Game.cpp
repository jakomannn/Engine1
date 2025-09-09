#include "Game.h"

Game::Game() {
	window = SDL_CreateWindow("game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
	renderer = SDL_CreateRenderer(window, -1, 0);
	engine = GameEngine(renderer);
}

void Game::run() {
	// Running already makes us know we are in game
	while (running) {
		// TODO: write all not player actions cases

		// Cycle for any mouse/keyboard events
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
		

		// Part for all other events
		engine.framesEventsHandler();
		engine.renderScreen();
		

		// TODO: add not only player things
		
	}
}

// TODO: write it already
void Game::quitEngine() {
	return;
}

