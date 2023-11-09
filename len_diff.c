#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int len_diff(char *s1, char *s2){
    char *temp1 =s1;
    while (*temp1 !='\0'){
        temp1++;
    }
    int len1 = temp1-s1;

    char *temp2 =s2;
    while (*temp2 !='\0'){
        temp2++;
    }
    int len2 = temp2-s2;
    return len1-len2;
}