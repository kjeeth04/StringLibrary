#include <stdio.h>
#include <stdlib.h>
#include "string.h"


int find(char *h, char *n){
    int i = 0;
    char *temp = h;
    for (int i = 0; *(temp+i) != '\0'; ++i){
        if (*(temp+i) == *n){
            return i;
        }
    }
    return -1;
}