#include <stdio.h>
#include <stdlib.h>
#include "string.h"


char *pad(char *s, int d){
    char *temp1 = s;
    while (*temp1 !='\0'){
        temp1++;
    }
    int len = temp1-s;

    if (*s == NULL){return NULL;}

    //Proceeds with padding otherwise
    char *final = (char *) malloc((len+1+d) * sizeof(char));
    int i = 0;
    for (s; *s != '\0'; ++s){
        final[i] = *s;
        ++i;
    }
    int j = i;
    for (j; j % d == 0; ++j){
        final[j] = ' ';
    }
    final[j++] = ' ';
    //Adding null-terminating character
    final[j] = '\0';

    return final;
}