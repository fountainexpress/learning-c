/******************************************************************************

Author: Yunzhu Shen
Date: Mar 18, 2020
Description: Lab-Function-problem-3

*******************************************************************************/
#include <stdio.h>

int main(){
    char phrase[80], search;
    int numberOfSpaces(char *anArray); //function declaration
    printf("This program computes the number of spaces entered by the user through the keyboard.\n");

    //user input
    printf("Please enter a phrase:");
    gets(phrase);

    //function call and output
    printf(" The string contains %d spaces.", numberOfSpaces(phrase));
    return 0;
}

int numberOfSpaces(char *anArray){//function definition
    int len=0, cnt=0;
    while(anArray[len]!='\0'){
        if(anArray[len]==' '){
            cnt++;
        }
        len++;
    }
    return cnt;
}