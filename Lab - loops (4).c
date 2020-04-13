/******************************************************************************

Author: Yunzhu Shen
Date: Feb 14, 2020
Description: Lab - Loops Problem 4

*******************************************************************************/

#include <stdio.h>

int main(){
    int integer, multiple, result = 1;
    printf("This program calculates the factorial of any integer smaller than 20.\n");
    printf("Please enter integer:");scanf("%d", &integer);
    while( (integer > 20) || (integer <= 0)){
        printf("Please enter any integer in between 0 and 20! ");scanf("%d", &integer);
    }
    for(multiple = 1; multiple <= integer; multiple++){
        result *= multiple;
    }
    printf("The factorial of %d is %d. ", integer, result);
    return 0;
}
