#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "string.h"

int strcmp_ign_case(char *s1, char *s2){
    char *temp1 = s1;
    char *temp2 = s2;
    while (tolower(*temp1) == tolower(*temp2) && *temp1 != '\0' && *temp2 != '\0'){
        ++temp1;
        ++temp2;
    }
    return (*temp1 - *temp2);
}