/******************************************************************************

Author: Yunzhu Shen
Date: Mar 10, 2020
Description: Lab-arrays-problem-5 ver.1

*******************************************************************************/

#include <stdio.h>

int main(){
    int size = 40;
    char phrase[size], charDelete;
    int index, deleteSince, charNotFound = 0;
    printf("This program deletes an element from an array through its index.\n");
    
    //enter phrase and character to be deleted
    printf("Enter a phrase:");
    fgets(phrase, sizeof(phrase), stdin);
    printf("Enter character you want to delete:");
    scanf(" %c", &charDelete);
    
    //search that character 
    for(index=0; index<size; index++){
        if(phrase[index]==charDelete){
            deleteSince = index;
            break;
        }
        else if(phrase[index]=='\0'){
            charNotFound = 1;
            break;
        }
    }
    
    if (charNotFound==0){
        
        //delete character
        for(index=deleteSince; phrase[index]!= '\0'; index++){
            phrase[index] = phrase[index+1];
        }
        
        //result
        printf("Result:\n");
        printf("%s", &phrase[0]);
    }
    //result if character not found in phrase
    else if (charNotFound==1){
        printf("%c is not in the phrase %s!", charDelete, phrase);
    }
    return 0;
}



