#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char *replace(char *s, char *pat, char *rep){
    //Getting length of each string
    char *temp1 = s;
    for (temp1; *temp1 != '\0'; ++temp1){
        continue;
    }
    int lenS = temp1-s;

    char *temp2 = pat;
    for (temp2; *temp2 != '\0'; ++temp2){
        continue;
    }
    int lenPat = temp2-pat;
    
    char *temp3 = rep;
    for (temp3; *temp3 != '\0'; ++temp3){
        continue;
    }
    int lenRep = temp3-rep;

    //creating the size dependent on whether or not the 
    int finalSize = lenS;
    if (lenRep > lenPat){
        finalSize *= lenRep;
    }

    char *final = (char *) malloc(finalSize * sizeof(char));
    char *temp = s;
    int a = 0;
    for (temp; *temp != '\0'; ++temp){
        char *tempPat = pat;
        //Checks to see if this is the start of a string sequence that needs to replaced
        if (*temp == *tempPat){
            int swap = 1;
            for (int i = 0; i < lenPat; ++i){
                if (*(temp+i) != *(tempPat+i)){
                    swap = 0;
                    break;
                }
            }
            //If determined that the string sequence that needs to be replaced is present, then it is replaced here.
            if (swap == 1){
                char *tempRep = rep;
                for (tempRep; *tempRep != '\0'; ++tempRep){
                    *final = *tempRep;
                    ++final;
                    ++a;
                }
                temp += (lenRep-1);
            }
            //If not the string sequence that needs to be replaced, then copied as normal
            else {
                *final = *temp;
                ++final;
                ++a;
            }
        }
        //If not the string sequence that needs to be replaced, then copied as normal
        else {
            *final = *temp;
            ++final;
            ++a;
        }
    }
    //Add null-terminating character
    ++final;
    *final = '\0';
    //Sets pointer back to index 0;
    final -=(a+1);
    return final;
}