/******************************************************************************

Author: Yunzhu Shen
Date: Mar 19, 2020
Description: Lab-Function-problem-4

*******************************************************************************/
#include <stdio.h>

int main(){
    char phrase[80], search, replace;
    int characterFound=0;
    void searchAndReplace(char *myArray, char search, char replace, int characterFound);  //function declaration
    printf("This program finds and replaces one character with another.\n");

    //user input
    printf("Please enter a phrase:");
    gets(phrase); 
    printf("Please enter the unwanted character: ");
    scanf(" %c", &search);    
    printf("Please enter the character to insert: ");    
    scanf(" %c", &replace); 

    //function call
    searchAndReplace(phrase, search, replace, characterFound);
    
    //Output
    printf("characterFound=%d", characterFound);
    if(characterFound==0){
        printf("\"%c\" is not found in the phrase! Original phrase: ", search);
    }
    printf("%s", phrase);
    return 0;
}

void searchAndReplace(char *myArray, char search, char replace, int characterFound){
    int len=0;
    while(myArray[len]!='\0'){
        if (myArray[len]==search){
            myArray[len]=replace;
            characterFound=1;
        }
        len++;
        printf("characterFound=%d\n", characterFound);
    }
}