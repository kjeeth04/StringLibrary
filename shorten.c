#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void shorten(char *s, int new_len){
    *(s+new_len) = '\0';
}