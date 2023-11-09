#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "string.h"


int ends_with_ignore_case(char *s, char *suff){
    char *temp1 = s;
    //Loops to the end of the String
    while (*temp1 != '\0'){
        ++temp1;
    }
    //Get length of suff
    char *temp2 = suff;
    while (*temp2 !='\0'){
        temp2++;
    }
    int len = temp2-suff;

    temp1 -= len;

    //Comparison
    while (tolower(*temp1) == tolower(*suff) && *temp1 != '\0' && *suff != '\0'){
        ++temp1;
        ++suff;
    }

    if (*temp1-*suff == 0){
        return 1;
    }
    return 0;
}