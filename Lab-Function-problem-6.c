/******************************************************************************

Author: Yunzhu Shen
Date: Mar 19, 2020
Description: Lab-Function-problem-6

*******************************************************************************/
#include <stdio.h>

int main(){
    int isItPrimer(int x);//function declaration
    int integer;
    printf("This program determines if  a number entered by the user is prime.\n");
    
    //user input
    printf("Please enter a positive  integer: ");
    scanf("%d", &integer);
    while (integer < 1){
        printf("Please enter a positive integer! ");
        scanf("%d", &integer);
    }
    
    //call function
    int isPrime = isItPrimer(integer);
    
    //output
    if(isPrime==0){
        printf("The number %d is NOT prime. ", integer);    
    }
    else if(isPrime==1){
        printf("The number %d is prime. ", integer);    
    }

    return 0;
}

int isItPrimer(int x){
    int divisor, isPrime;
    for(divisor = 2; divisor < x; divisor++){
        if((x%divisor)==0){
            divisor = x + 1;//so that the loop stops AND the if(divisor == integer) = false
            isPrime = 0;
        }
    }    
    if(divisor == x){
        isPrime = 1;
    }
    
    return isPrime;
}