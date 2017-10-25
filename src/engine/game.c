/** 
 * gameloop.c
 * */

#import <SDL.h>
#import <stdio.h>
#import "game.h"

void Game (char *title) {
    
    
    Window(title); // Create the window
    // addImage(window);
    Event_Handler();
}

void addImage(SDL_Window *window)
{
	printf("%s- Agregando imágen%s\n", ANSI_COLOR_GREEN, ANSI_COLOR_RESET);
	SDL_Surface *bmp = SDL_LoadBMP("media/images/boats.bmp");
	if (bmp == NULL)
	{
		printf("Could load image: %s\n", SDL_GetError());
		// quit(window);
	}

	SDL_BlitSurface(bmp, 0, SDL_GetWindowSurface(window), 0);
	SDL_UpdateWindowSurface(window);
}