/******************************************************************************

Author: Yunzhu Shen
Date: Feb 14, 2020
Description: Lab - Loops Problem 3

*******************************************************************************/

#include <stdio.h>

int main(){
    int base, power, result = 1, timesMultiplied;
    printf("This program calculates the nth power of a number when both the base and the power are entered by the user.\n");
    printf("Please enter in the order of the base and the power, separated by space:");
    scanf("%d %d", &base, &power);
    if( power >= 0 ){
        for(timesMultiplied = 0; timesMultiplied < power; timesMultiplied++){
            result *= base;
        }
        printf("%d to the power of %d is %d. ", base, power, result);

    }
    else{ //when power is negative
        for(timesMultiplied = 0; timesMultiplied < (power * -1); timesMultiplied++){
            result *= base;
        }
        printf("%d to the power of %d is 1/%d. ", base, power, result);
    }
    return 0;
}
