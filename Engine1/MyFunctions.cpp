#include "MyFunctions.h"

SDL_Surface* LoadAndResizeSurface(const char* filename, int new_w, int new_h) {
	//loading origin surface
	SDL_Surface* surface = SDL_LoadBMP_RW(SDL_RWFromFile(filename, "rb"), 0);
	if (!surface) {
		std::cout << "BMP loading error: " << SDL_GetError() << std::endl;
		SDL_FreeSurface(surface);
		return NULL;
	}

	//resizing surface
	SDL_Surface* resized_surface = SDL_CreateRGBSurfaceWithFormat(0, new_w, new_h, 32, surface->format->format);
	if (!resized_surface) {
		std::cout << "Resized surface creating error: " << SDL_GetError() << std::endl;
		SDL_FreeSurface(resized_surface);
		return NULL;
	}

	SDL_Rect src_rect = { 0, 0, surface->w, surface->h };
	SDL_Rect dst_rect = { 0, 0, new_w, new_h };

	if (SDL_BlitScaled(surface, &src_rect, resized_surface, &dst_rect) != 0) {
		std::cout << "Scaling error: " << SDL_GetError() << std::endl;
		SDL_FreeSurface(surface);
		SDL_FreeSurface(resized_surface);
		return NULL;
	}

	SDL_FreeSurface(surface);
	std::cout << "BMP was successfully downloaded and resized." << std::endl;
	return resized_surface;
}