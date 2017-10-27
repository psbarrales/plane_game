/** 
 * gameloop.c
 * */

#import <SDL.h>
#import <stdio.h>
#import "game.h"

void Game (char *title) 
{
    ReadFile("config/window.ini");
    Window(title); // Create the window
	Event_Handler();	
}