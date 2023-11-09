#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int num_in_range(char *s1, char b, char t){
    int counter = 0;
    char *temp = s1;
    for (temp; *temp != '\0'; ++temp){
        if (*temp >= b && *temp <= t){
            ++counter;
        }
    }
    return counter;
}