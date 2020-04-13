/******************************************************************************

Author: Yunzhu Shen
Date: Mar 18, 2020
Description: Lab-Function-problem-1

*******************************************************************************/
#include <stdio.h>

int slength(char *theArray);

int main(){
    char myArray[80];

    //user input
    printf("Enter a phrase: ");
    gets(myArray);

    //function
    // slength(&myArray[0]); //doesn't have to be called if it's used later, 
    //i.e.  line 24
    
    //output 
    printf("The phrase has %d characters", slength(&myArray[0])); 
                                        //line 24 parameter is necesssary
    return 0;
}

int slength(char *theArray){
    int len = 0;
    while(theArray[len]!='\0'){
        ++len;
    }
    return len;
}