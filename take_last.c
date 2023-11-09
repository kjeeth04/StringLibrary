#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void take_last(char *s, int n){
    char *temp1 = s;
    for (temp1; *temp1 != '\0'; ++temp1){
        continue;
    }
    if (temp1-s < n){return;}

    int i = 0;
    char *temp = s;
    //Iterates to the back of the string
    for (temp; *temp != '\0'; ++temp){
        continue;
    }
    //Backs up to the n-to-the-last position
    for (int j = n; j > 0; --j){
        --temp;
    }
    if (*temp == NULL){return;}
    //Overwrites old content
    for (temp; *temp != '\0'; ++temp){
        *s = *temp;
        ++s;
    }
    //Readds null terminating character to the end;
    *s = '\0';

}