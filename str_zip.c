#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char *str_zip(char *s1, char *s2){
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

    char *zip = (char *) malloc((len1+len2+1)*sizeof(char));
    char *temp3 = s1;
    char *temp4 = s2;
    int i = 0;
    while (i < len1+len2){
        if (*temp3 != '\0'){
            zip[i] = *temp3;
            ++i;
            ++temp3;
        }
        if (*temp4 != '\0'){
            zip[i] = *temp4;
            ++i;
            ++temp4;
        }
    }
    //Add null-terminating character to the end
    zip[i] = '\0';
    return zip;
}