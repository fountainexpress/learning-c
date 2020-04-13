/******************************************************************************

Author: Yunzhu Shen
Date: Feb 14, 2020
Description: Lab - Loops Problem 1

*******************************************************************************/

#include <stdio.h>

int main(){
    int integer = 1, upperLimit;
    printf("This program prints all natural numbers from 1 to an integer selected by the user.\n");
    printf("Please enter any natural number:");
    scanf("%d", &upperLimit);
    while(upperLimit <= 0){
        printf("Please enter a natural number!\n");
        scanf("%d", &upperLimit);
        scanf("%d", &upperLimit);
    }
    while(integer <= upperLimit){
        printf("%d ", integer);
        integer++;
    }
    return 0;
}
