#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void rm_space(char *s){
    char *temp = s;
    while (*temp == ' '){
        ++temp;
    }

    //Shifts all the characters down to remove front whitespace
    int i = 0;
    while (*(temp+i) != '\0'){
        *s = *(temp+i);
        ++s;
        ++i;
    }

    //Loops to the end of the String
    while (*s != '\0'){
        ++s;
    }
    //Loops to tail backspace char and sets it to '\0'
    while (*s == ' ' || *s == '\0'){
        --s;
    }
    *(s+1) = '\0';
}