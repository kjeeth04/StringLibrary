#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char *repeat(char *s, int x, char sep){
    if (*s == NULL){return NULL;}
    //Getting length of s
    char *temp = s;
    while (*temp !='\0'){
        ++temp;
    }
    int len = temp-s;

    char *final = (char *) malloc(((len * x) + x) * sizeof(char));
    int a = 0;
    for (int i = 0; i < x; ++i){
        for (char *temp2 = s; *temp2 != '\0'; ++temp2){
            *final = *temp2;
            ++final;
            ++a;
        }
        //If not on the last iteration, add separator
        if (i < x-1){
            *final = sep;
            ++final;
            ++a;
        }

    }
    //Add null-terminating character
    *final = '\0';
    //Sets pointer back to index 0;
    final -=(a);
    return final;
}
