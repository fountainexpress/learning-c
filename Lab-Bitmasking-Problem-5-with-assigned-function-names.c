/******************************************************************************

Author: Yunzhu Shen
Date: Apr 11th, 2020
Description: Lab-Bitmasking-Problem-5

*******************************************************************************/

#include <stdio.h>

void binaryPrint(int DecimalInput);
int leftRotate( int x, unsigned int d);

int main(){
    int number, rotation, outputDec;
    printf("Please enter a number: ");      
    scanf(" %d", &number);
    printf("Please enter the number of rational spaces: ");      
    scanf(" %d", &rotation);
    outputDec = leftRotate(number, rotation);
    printf("\nInput in binary:    ");
    binaryPrint(number);
    printf("\nOutput in binary:    ");
    binaryPrint(outputDec);
    
}

void binaryPrint(int DecimalInput){
    int mask = 0x80;
    while(mask >= 0x01){
        if(mask == 0x08)
        printf(" ");
        if( DecimalInput & mask)
        printf("1");
        else
        printf("0");
        mask = mask >> 1; // >> is right shift, equivalent to mask /= 2.
    }
}

int leftRotate(int x, unsigned int d){
    int newLSB;
    for(int i=0; i<d; i++){
        
        //save MSB as LSB of mask
        newLSB = x >>7;
        
        //shift each bit left
        x = x<<1;
        
        //set original MSB as the new LSB
        x = x|newLSB;
    }
    return x;
}
