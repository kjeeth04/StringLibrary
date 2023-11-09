#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char *str_connect(char **strs, int n, char c){
    int totalLen = 0;
    char **strstemp = strs;
    //Get total length for memory allocation
    for (int i = 0; i < n; ++i){
        char *temp = strstemp[i];
        for (temp; *temp != '\0'; ++temp){
        continue;
        }
        totalLen += (temp-strstemp[i]);
    }

    char *final = (char *) malloc((totalLen + n) * sizeof(char));
    int a = 0;
    for (int i = 0; i < n; ++i){
        char *temp = strs[i];
        for (temp; *temp != '\0'; ++temp){
            *final = *temp;
            ++final;
            ++a;

        }
        if (i < n-1){
            *final = c;
            ++final;
            ++a;
        }
    }
    *final = '\0';
    final -= (a);
    return final;
}