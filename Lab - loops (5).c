/******************************************************************************

Author: Yunzhu Shen
Date: Feb 14, 2020
Description: Lab - Loops Problem 5

*******************************************************************************/

#include <stdio.h>

int main(){
    int integer, divisor;
    printf("This program determines if  a number entered by the user is prime.\n");
    printf("Please enter a positive  integer: ");
    scanf("%d", &integer);
    while (integer < 1){
        printf("Please enter a positive integer! ");
        scanf("%d", &integer);
    }
    for(divisor = 2; divisor < integer; divisor++){
        if((integer%divisor)==0){
            divisor = integer + 1;//so that the loop stops AND the if(divisor == integer) = false
            printf("The number %d is NOT prime. ", integer);
        }
    }    
    if(divisor == integer){
        printf("The number %d is prime. ", integer);
    }
    return 0;
}
