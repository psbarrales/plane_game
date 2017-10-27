#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int ReadFile(char *filename)
{
    FILE *f;
    char c;
    f=fopen(filename,"rt");

    while((c=fgetc(f))!=EOF){
        printf("%c",c);       
    }

    printf("\n");
    fclose(f);
    return 0;
}

int FindText(char *string, char needle) 
{
    char letter;
    int index = 0;
    while(string[index] != '\0') {
        if(string[index] == needle){
            letter = string[index];
            break;
        }
        index++;
    }

    return index;
}