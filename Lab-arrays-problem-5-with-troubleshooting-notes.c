/******************************************************************************

Author: Yunzhu Shen
Date: Mar 10, 2020
Description: Lab-arrays-problem-5

*******************************************************************************/

#include <stdio.h>

int main(){
    int size = 15, delete[size];
    char phrase[size], charDelete;
    int index, indexDelete, sizeDelete, deleteSince, charNotFound;
    printf("This program deletes an element from an array through its index.\n");
    
    //enter phrase and character to be deleted
    printf("Enter a phrase:");
    fgets(phrase, sizeof(phrase), stdin);
    printf("Enter character you want to delete:");
    scanf(" %c", &charDelete);
    
    //search all matches of that character, if at all
    indexDelete = -1;
    charNotFound = 0;
    for(index=0; index<size; index++){
        if(phrase[index]==charDelete){
            indexDelete++;
            delete[indexDelete] = index;
            // printf("delete[%d]=%d ", indexDelete, delete[indexDelete]);
        }
        else if((phrase[index]=='\0')&&(indexDelete == -1)){
            charNotFound = 1;
            break;
        }
        else if(phrase[index]=='\0'){
            sizeDelete = indexDelete+1;
            // printf("sizeDelete=%d,  indexDelete=%d", sizeDelete, indexDelete);//sizeDelete is the number of the characters found in previously
            break;
        }
        // printf("phrase[%d]=%c, indexDelete=%d \n", index, phrase[index],indexDelete);
    }
    // for(int i=0; i<indexDelete; i++){
    //     printf("delete[%d]=%d ", i, delete[i]);        
    // }

    if (charNotFound==0){
        
        //if more than one match, ask user which match to delete?
        if(sizeDelete>1){
            printf("There are total of %d matches. Counting from the left, which one do you want to delete?", sizeDelete);
            scanf(" %d", &indexDelete);
            indexDelete = indexDelete-1;//actual index in delete[]
        }
        else{
            indexDelete = 0;
        }
        
        //delete character
        deleteSince = delete[indexDelete];
        for(index=deleteSince; phrase[index]!= '\0'; index++){
            phrase[index] = phrase[index+1];
        }
        
        //result when character is in phrase
        printf("Result:\n");
        printf("%s", &phrase[0]);
    }
    
    //result when character not found in phrase
    else if (charNotFound==1){
        printf("%c is not in the phrase %s!", charDelete, phrase);
    }
    return 0;
}




