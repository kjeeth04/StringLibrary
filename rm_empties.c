#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void rm_empties(char **words){
    //Get Length
    char **temp1 = words;
    int len = 0;
    for (int i = 0; temp1[i] != NULL; ++i){
        ++len;
    }

    for (int i = 0; i < len; ++i){
        char *temp2 = words[i];
        //Checks to make sure the String is not empty. if it is empty, then isEmpty will remain 1
        int isEmpty = 1;
        for (temp2; *temp2 != '\0'; ++temp2){
            if (*temp2 != ' '){
                isEmpty = 0;
            }
        }
        //If this is empty, everything else gets shifted down
        if (isEmpty == 1){
            for (int j = i; j < len; ++j){
                words[j] = words[j+1];
                //Makes sure that the string that is now at words[i] is not also an empty String, so we must double check words[i]
                //until it is confirmed to not be empty
                --i; 
            }
            //Decreases length to adjust for new Array size:
            --len;
        }
    }
}