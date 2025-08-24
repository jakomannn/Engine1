#include "MyFunctions.h"

SDL_Surface* LoadAndResizeSurface(const char* filename, int new_w, int new_h) {
	//loading origin surface
	SDL_Surface* surface = SDL_LoadBMP_RW(SDL_RWFromFile(filename, "rb"), 0);
	if (!surface) {
		std::cout << "BMP loading error: " << SDL_GetError() << std::endl;
		return NULL;
	}

	//resizing surface
	SDL_Surface* resized_surface = SDL_CreateRGBSurfaceWithFormat(0, new_w, new_h, 32, surface->format->format);
	if (!resized_surface) {
		std::cout << "Resized surface creating error: " << SDL_GetError() << std::endl;
		return NULL;
	}