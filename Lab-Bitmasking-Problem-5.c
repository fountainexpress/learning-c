/******************************************************************************

Author: Yunzhu Shen
Date: Apr 11th, 2020
Description: Lab-Bitmasking-Problem-5

*******************************************************************************/

#include <stdio.h>

void binaryPrint(int DecimalInput);
int leftRotate( int inputDec, unsigned int leftRotate);

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

int leftRotate(int inputDec, unsigned int leftRotate){
    int newLSB, outputDec;
    for(int i=0; i<leftRotate; i++){
        
        //save MSB as LSB of mask
        newLSB = inputDec >>7;
        
        //shift each bit left
        inputDec = inputDec<<1;
        
        //set original MSB as the new LSB
        outputDec = inputDec|newLSB;
    }
    return outputDec;
}