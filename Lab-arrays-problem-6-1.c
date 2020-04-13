/******************************************************************************

Author: Yunzhu Shen
Date: Mar 10, 2020
Description: Lab-arrays-problem-6 doesn't work when phrase contain space or non letter symbols

*******************************************************************************/

#include <stdio.h>

int main(){
    int size = 40, realSize = 0;
    char phrase[size];
    int index, isSymmetrical;
    printf("This program determines if a phrase entered by the user is a palindrome\n");
    
    //enter phrase
    printf("Enter a phrase:");
    // fgets(phrase, sizeof(phrase), stdin); //-->not preferred: makes "determine size" part count '\0' as a character
    gets(phrase); //-->preferred: counts only user input 

    
    //determine size of phrase
    for(index=0; index<size; index++){
        if(phrase[index]=='\0'){
            break;
        }
        else{
        realSize++;
        // printf("%d-%c ", realSize, phrase[index]); //only used for troubleshooting 
        }
    }
    
    //check letter
    isSymmetrical = 1;
    for(index=0; index<(realSize/2); index++){
        if(phrase[index]!=phrase[realSize-(1+index)]){ 
            isSymmetrical = 0;
            break;
        }
    }
   
   //result
   if(isSymmetrical==0){
       printf("%s is not a palindrome.", phrase);
   }
   else{
       printf("%s is a palindrome.", phrase);
   }
    return 0;
}



