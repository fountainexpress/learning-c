/******************************************************************************

Author: Yunzhu Shen
Date: Mar 10, 2020
Description: Lab-arrays-problem-6 handles space, upper & lower letters

*******************************************************************************/

#include <stdio.h>

int main(){
    int size = 40, realSize = 0;
    char userPhrase[size], realPhrase[size];
    int userIndex, realIndex, isSymmetrical;
    
    printf("This program determines if a phrase entered by the user is a palindrome\n");
    
    //enter phrase
    printf("Enter a phrase: ");
    // fgets(phrase, sizeof(phrase), stdin); //-->not preferred: makes "determine size" part count '\0' as a character
    gets(userPhrase); //-->preferred: counts only user input 

    //clean up phrase to all lower characters with neither space nor punctuation
    realIndex = 0;
    for(userIndex=0; userPhrase[userIndex]!='\0'; userIndex++){
        if((userPhrase[userIndex]>='a')&&(userPhrase[userIndex]<='z')){
            realPhrase[realIndex] = userPhrase[userIndex];
            realIndex++;
        }
        else if((userPhrase[userIndex]>='A')&&(userPhrase[userIndex]<='Z')){
            realPhrase[realIndex] = userPhrase[userIndex]+32;//convert to lower space
            realIndex++;
        }
    }

    //determine size of phrase    
    realSize = realIndex;

    //check letter
    isSymmetrical = 1;
    for(realIndex=0; realIndex<(realSize/2); realIndex++){
        if(realPhrase[realIndex]!=realPhrase[realSize-(1+realIndex)]){ 
            isSymmetrical = 0;  //realSize-(1+realIndex) is the letter (index)th to last 
            break;
        }
    }
   
  //result
  if(isSymmetrical==0){
      printf("%s is not a palindrome.", userPhrase);
  }
  else{
      printf("%s is a palindrome.", userPhrase);
  }
    return 0;
}



