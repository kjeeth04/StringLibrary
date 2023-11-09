#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "string.h"

void capitalize(char *s){
    int isFirstLetter = 1;
    for (s; *s != '\0'; ++s){
        if (isFirstLetter == 1 && *s != ' '){
            *s = toupper(*s);
            isFirstLetter = 0;
        }
        else if (isFirstLetter == 0 && *s != ' '){
            *s = tolower(*s);
        }
        else if (*s == ' '){
            isFirstLetter = 1;
        }
    }
}