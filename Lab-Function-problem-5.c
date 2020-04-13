/******************************************************************************

Author: Yunzhu Shen
Date: Mar 19, 2020
Description: Lab-Function-problem-5

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
    int numberPalindrome( int number); //function declaration
    int input, output;
    printf("This program generates palindrome of a number.");
    
    //user input
    printf("Please enter a number: ");
    scanf(" %d", &input);
    
    //call function & output
    output = numberPalindrome(input);
    printf("The palindrome of %d is %d.", input, output);
    return 0;
}

int numberPalindrome(int number){
    
    //find largest digit
    int highestPower = log10(number);
    int digit = highestPower + 1;
    
    //create an array for the digits, index0 being the smallest digit
    int digitArray[digit], power;
    for(power=highestPower; power>=0; power--){
        digitArray[power] = number/pow(10,power);
        number -= ( digitArray[power] * pow(10,power) );
    }
    
    //create palindrome from array
    int palindrome = 0, index;
    for (index=0; index<=highestPower; index++){
        power = highestPower - index;
        palindrome += digitArray[index] * pow(10,power) ;
    }
    
    return palindrome;
}
