/******************************************************************************

Author: Yunzhu Shen
Date: Apr 10th, 2020
Description: Lab-Bitmasking-Problem-2

*******************************************************************************/

#include <stdio.h> 

int addOne(int x);

main(){
    int input, output;      
    printf("Please enter a number: ");      
    scanf(" %d", &input);      
    output = addOne(input);
    printf("input = %d \noutput = %d ", input, output);
}

int addOne(int x){
    int mask = 0x01;
    while(1){
        if(x&mask){
            x = x ^ mask; //toggle bit
            mask = mask << 1; //next-bit-checker
        }
        else{
            x = x |  mask; // set bit
            break;
        }
    }
    return x;
}