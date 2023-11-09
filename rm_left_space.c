#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void rm_left_space(char *s){
    char *temp = s;
    int a = 0;
    while (*temp == ' '){
        ++temp;
        ++a;
    }

    //Shifts all the characters down to remove front whitespace
    int i = 0;
    while (*(temp+i) != '\0'){
        *s = *(temp+i);
        ++s;
        ++i;
    }
    //readds null-terminating to new
    *(s) = '\0';
}