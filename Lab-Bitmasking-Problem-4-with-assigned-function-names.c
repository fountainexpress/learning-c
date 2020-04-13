/******************************************************************************

Author: Yunzhu Shen
Date: Apr 10th, 2020
Description: Lab-Bitmasking-Problem-4

*******************************************************************************/

#include <stdio.h> 

int evenVSodd(int x);

main(){
    int input, output;      
    printf("Please enter a number: ");      
    scanf(" %d", &input);      
    output = evenVSodd(input);
    if(output==1)
    printf("The number %d is ODD", input);
    else
    printf("The number %d is EVEN", input);
}

int evenVSodd(int x){
    int mask = 0x01, isOdd;
    if(x&mask){
        isOdd = 1;
    }
    else{
        isOdd = 0;
    }
    return isOdd;
}