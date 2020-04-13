/******************************************************************************

Author: Yunzhu Shen
Date: Apr 10th, 2020
Description: Lab-Bitmasking-Problem-1

*******************************************************************************/

#include <stdio.h> 

void binaryPrint(int x);

main(){
    int x;      
    printf("Please enter a number less or equal to 255: ");      
    scanf(" %d", &x);      
    binaryPrint(x);
}

void binaryPrint(int x){
    int mask = 0x80;
    while(mask >= 0x01){
        if(mask == 0x08)
        printf(" ");
        if( x & mask)
        printf("1");
        else
        printf("0");
        mask = mask >> 1; // >> is right shift, equivalent to mask /= 2.
    }
}
