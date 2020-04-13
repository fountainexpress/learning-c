/******************************************************************************

Author: Yunzhu Shen
Date: Mar 18, 2020
Description: Lab-Function-problem-2

*******************************************************************************/
#include <stdio.h>

int main(){
    char phrase[50], search;
    int findCharacter(char *myArray, char search); //function declaration
    printf("This program read a phrase entered by the user and delivers the number of times a user selected character is found in the sentence\n");
    printf("This search function is case sensitive.");
    
    //user input
    printf("Please enter a phrase:");
    gets(phrase);
    printf(" Please enter a character to search: ");
    scanf(" %c", &search);
    
    //function call and output
    printf(" We found %d characters in the strings. ", findCharacter(phrase, search));
    return 0;
}

int findCharacter(char *myArray, char search){//function definition
    int index, chararcterCount=0;
    for(index=0; myArray[index]!='\0'; index++){
        if (myArray[index]==search){
            chararcterCount++;
        }
    }
    return chararcterCount;
}