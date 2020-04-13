/******************************************************************************

Author: Yunzhu Shen
Date: Apr 10th, 2020
Description: Lab-Bitmasking-Problem-3

*******************************************************************************/

#include <stdio.h> 

int numberOfOneBits(int input);

main(){
    int input, output;      
    printf("Please enter a number: ");      
    scanf(" %d", &input);      
    output = numberOfOneBits(input);
    printf("There are %d 1s in %d in binary.", output, input);
}

int numberOfOneBits(int input){
    int count = 0;
    for(int mask = 0x01; mask <= 0x80; mask<<=1 ){
        if (input & mask){
            count++;
        }
    }
    return count;
}