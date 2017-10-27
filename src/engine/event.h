#ifndef EVENT
#define EVENT

#include "../utils/colors.h"

struct Event_Model 
{
    char *kind;
    unsigned int value;
};

void Event_Manager(SDL_Event* event, int *exit);
void Event_Handler();

#endif