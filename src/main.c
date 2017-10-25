#import <stdio.h>
#import <stdbool.h>
#import <SDL.h>
#import "engine/game.h"
#import "utils/colors.h"

//Starts up SDL and creates window
bool init();
SDL_Window *getWindow(char *);
void addImage(SDL_Window *);
void loopGame(SDL_Window *);

int main(int argc, char *argv[])
{
	if (argc < 2 || argv[1] == NULL)
	{
		printf("Usage: \n car titulo");
		return 0;
	}
	printf("%sIniciando plataforma...%s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);
	printf("Espere...\n");

	if(init()){
		Game(argv[1]);	

		printf("%sSaliendo...%s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);

		SDL_Quit();
	}
	return 0;
}

bool init()
{
	printf("%s- Iniciando SDL%s\n", ANSI_COLOR_GREEN, ANSI_COLOR_RESET);
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		success = false;
	}

	return success;
}