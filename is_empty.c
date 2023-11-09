#include <stdio.h>
#include <stdlib.h>
#include "string.h"


int is_empty(char *s){
    char *temp = s;
    for (temp; *temp != '\0'; ++temp){
        if (*temp != ' '){
            return 0;
        }
    }
    return 1;
}