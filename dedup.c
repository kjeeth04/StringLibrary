#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char *dedup(char *s){
    //Get Length
    char *temp1 = s;
    while (*temp1 !='\0'){
        temp1++;
    }
    int len = temp1-s;
    char *final = (char *) malloc((len+1) * sizeof(char));
    int i = 0;
    //Collection of chars that already appeared
    int usedWords[len];
    int a = 0;

    char *temp2 = s;
    for (temp2; *temp2 != '\0'; ++temp2){
        int repeat = 1;
        //Checks to see if char has already appeared
        for (int j = 0; j < len; ++j){
            if (usedWords[j] == (int) *temp2){
                repeat = 0;
                break;
            }
        }
        //If not, adds char to collection of usedWords and the return string
        if (repeat == 1){
            usedWords[a] = (int) *temp2;
            ++a;
            final[i] = *temp2;
            ++i;
        }
    }
    
    //Add null-terminating character to the end
    final[i] = '\0';
    return final;
}