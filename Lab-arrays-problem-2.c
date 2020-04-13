/******************************************************************************

Author: Yunzhu Shen
Date: Mar 7, 2020
Description: Lab-arrays-problem-2

*******************************************************************************/

#include <stdio.h>

int main(){
    int index, uppercaseCount=0, lowercaseCount=0;    
    int size=40;
    char phrase[size];
    printf("This  program calculates how many upper and lower case letters are present in the phrase entered by user.\n");
    printf("Enter phrase: ");
    fgets(phrase, sizeof(phrase), stdin);
    // gets(&phrase[0]); //will get warning: ‘gets’ is deprecated  
    for (index=0; (index<size); index++){
        if( (phrase[index]>='a') && (phrase[index]<='z') ){
            lowercaseCount++;
            printf("[lo-%d %c] ", index, phrase[index]); //
        }
        else if ( (phrase[index]>='A') && (phrase[index]<='Z') ){
            uppercaseCount++;
            printf("  [up-%d %c] ", index, phrase[index]);
        }
        else if ( (phrase[index])=='\0'){
            break;
        }
    } 
    printf("There are %d uppercase, %d lowercase in %s.", uppercaseCount, lowercaseCount, &phrase[0]);
    return 0;
}



