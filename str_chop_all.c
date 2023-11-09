#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char **str_chop_all(char *s, char c){
    //Finds the total amount of elements based on occurences of the delimiter
    char *temp1 = s;
    int len = 0;

    for (temp1; *temp1 != '\0'; ++temp1){
        //Makes sure any chars between the last delimiter and null-terminating char has an index reserved for it
        if (*temp1 == c || *(temp1+1) == '\0'){
            ++len;
        }
    }

    char **final = (char**) malloc ((len+1) * sizeof(char*));
    char *temp2 = s;
    //Counteraction if the delimiter is the first char
    if (*temp2 == c){
        ++temp2;
    }

    //Creates Strings to be entered into final
    for (int i = 0; i < len; ++i){
        char *temp3 = temp2;
        //Gets length of index value for memory allocation
        for (temp3; *temp3 != c || *(temp3+1) == '\0'; ++temp3){
            continue;
        }
        int valueLen = temp3-temp2;

        final[i] = (char *) malloc(valueLen * sizeof(char));

        for (temp2; *temp2 != c || *(temp2+1) == '\0'; ++temp2, ++final[i]){
            *final[i] = *temp2;
        }
        //Adds null-terminating character to end of String and pushes temp2 to the char after delimiter
        *final[i] = '\0';
        final[i] -= valueLen;
        ++temp2;
    }
    //Adds null pointer to the end of the array
    final[len] = NULL;
    return final;
}