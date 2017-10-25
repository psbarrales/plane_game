#include <SDL.h>
#include "window.h"

void Window(char *title) {
    return createWindow(title);
}

void createWindow(char *title)
{
	SDL_Window *window;

	window = SDL_CreateWindow(title, 0, 0, 720, 576, SDL_WINDOW_SHOWN);

	if (window == NULL)
	{
		// In the case that the window could not be made
	}
};