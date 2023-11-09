#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char *ptr_to(char *h, char *n){
    int i = 0;
    char *temp = h;
    for (temp; *temp != '\0'; ++temp){
        if (*temp == *n){
            return temp;
        }
    }
    return (char *)NULL;

}