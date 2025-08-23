// Engine1.cpp: определяет точку входа для приложения.
//

#include "Engine1.h"

int main(int argc, char* argv[])
{
	SDL_Window* window = SDL_CreateWindow("test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_Surface* surface = SDL_LoadBMP_RW(SDL_RWFromFile("../../../images/first_idle_model.bmp", "rb"), 0);
	
	if (!surface) {
		std::cout << "Error creating surface" << SDL_GetError() << std::endl;
	}

	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

	int running = 1;
	SDL_Event event;
	while (running) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				running = 0;
			}
		}
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);

		SDL_RenderCopy(renderer, texture, NULL, NULL);

		SDL_RenderPresent(renderer);

		SDL_Delay(10000);
	}

	return 0;
}
