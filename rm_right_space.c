#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void rm_right_space(char *s){
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