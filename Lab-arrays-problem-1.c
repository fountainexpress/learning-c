/******************************************************************************

Author: Yunzhu Shen
Date: Mar 7, 2020
Description: Lab-arrays-problem-1

*******************************************************************************/

#include <stdio.h>

int main(){
    int userInput[10], index;
    printf("This program reads ten user entered integer and prints only negative numbers.\n");
    for(index=0; index<10; index++){
        printf("enter integer %d: ", index+1);
        scanf(" %d", &userInput[index]);
    }
    for(index=0; index<10; index++){
        if (userInput[index]<0)
        printf("%d ",userInput[index]);
    }
    return 0;
}
