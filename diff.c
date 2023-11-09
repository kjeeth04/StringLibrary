#include <stdio.h>
#include <stdlib.h>
#include "string.h"


int diff(char *s1, char *s2){
    int counter = 0;
    char *temp1 = s1;
    char *temp2 = s2;

    while (*temp1 != '\0' && *temp2 != '\0'){
        if (*temp1 == *temp2){
            ++counter;
        }
        ++temp1;
        ++temp2;
    }
    return counter;
}