#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "string.h"

int all_letters(char *s){
    char *temp = s;
    for (temp; *temp != '\0'; ++temp){
        if (isalpha(*temp) == 0 && *temp != ' '){
            return 0;
        }
    }
    return 1;
}