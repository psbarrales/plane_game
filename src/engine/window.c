#include <stdio.h>
#include <SDL.h>
#include "window.h"


void Window(char *title) 
{
	prepareWindow();
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

int prepareWindow()
{
	printf("%s- Iniciando SDL%s\n", ANSI_COLOR_GREEN, ANSI_COLOR_RESET);
	//Initialization flag
	int success = 1;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		success = 0;
	}

	return success;
}