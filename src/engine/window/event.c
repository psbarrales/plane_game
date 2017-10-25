#include <SDL.h>
#include <stdio.h>
#include "event.h"


void Event_Handler() {
    int exit = 0;
    SDL_Event event;

    printf("%s- Starting Loop de juego...%s\n", ANSI_COLOR_GREEN, ANSI_COLOR_RESET);    
    while (!exit)
    {
        Event_Manager(&event, &exit);
    }
}

void Event_Manager(SDL_Event* event, int *exit) {
    if(SDL_PollEvent(event)){
        switch (event->type) {
        /* close button clicked */
            case SDL_QUIT:
                *exit = 1;
                break;

            /* handle the keyboard */
            case SDL_KEYDOWN:
                switch (event->key.keysym.sym) {
                case SDLK_ESCAPE:
                case SDLK_q:
                    *exit = 1;
                    break;
                }
                break;
        }
    } else {

    }
}


