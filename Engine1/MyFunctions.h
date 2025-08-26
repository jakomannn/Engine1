#pragma once

#include <iostream>
#include <SDL.h>
#include <string.h>


SDL_Surface* LoadAndResizeSurface(const char* filename, int new_w, int new_h);
