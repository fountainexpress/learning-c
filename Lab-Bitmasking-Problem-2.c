/******************************************************************************

Author: Yunzhu Shen
Date: Apr 10th, 2020
Description: Lab-Bitmasking-Problem-2

*******************************************************************************/

#include <stdio.h> 

int addOne(int input);

main(){
    int input, output;      
    printf("Please enter a number: ");      
    scanf(" %d", &input);      
    output = addOne(input);
    printf("input = %d \noutput = %d ", input, output);
}

int addOne(int input){
    int mask = 0x01;
    while(1){
        if(input&mask){
            input = input ^ mask; //toggle bit
            mask = mask << 1; //next-bit-checker
        }
        else{
            input = input |  mask; // set bit
            break;
        }
    }
    return input;
}