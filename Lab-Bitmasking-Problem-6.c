/******************************************************************************

Author: Yunzhu Shen
Date: Apr 11th, 2020
Description: Lab-Bitmasking-Problem-6

*******************************************************************************/

#include <stdio.h>

void binaryPrint(int DecimalInput);
int rightRotate( int x, unsigned int d); 

int main(){
    int number, rotation, outputDec;
    
    //user input
    printf("Please enter a number: ");      
    scanf(" %d", &number);
    printf("Please enter the number of rational spaces: ");      
    scanf(" %d", &rotation);
    
    //function
    outputDec = rightRotate(number, rotation);
    
    //output
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

int rightRotate( int x, unsigned int d){
    int newMSB;
    for(int i=0; i<d; i++){
        
        //save LSB as MSB of mask
        newMSB = x << 7;
        
        //shift each bit right
        x = x >> 1;
        
        //set original MSB as the new LSB
        x = x|newMSB;
    }
    return x;
}