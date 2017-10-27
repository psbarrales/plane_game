#include <stdio.h>
#include <SDL.h>
#include "engine/game.h"
#include "utils/colors.h"

//Starts up SDL and creates window
int main(int argc, char *argv[])
{
	printf("%sIniciando plataforma...%s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);
	printf("Espere...\n");

	Game("Iniciando");	

	printf("%sSaliendo...%s\n", ANSI_COLOR_RED, ANSI_COLOR_RESET);

	SDL_Quit();
	return 0;
}