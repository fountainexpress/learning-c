/******************************************************************************

Author: Yunzhu Shen
Date: Mar 7, 2020
Description: Lab-arrays-problem-3

*******************************************************************************/

#include <stdio.h>

int main(){
    int array[10];
    int index, indexCompare, placeHolder;
    printf("This  program sorts in place an array of 10 integers in descending order.\n");
    
    //user enter array
    for(index=0; index<10; index++){
        printf("enter integer #%d: ", index+1);
        scanf(" %d", &array[index]);
    }

    //compare
    for(index=0; index<10; index++){
        for (indexCompare=index+1; indexCompare<10;indexCompare++){
            
            //sort
            if (array[index]<array[indexCompare]){
                placeHolder=array[index];
                array[index]=array[indexCompare];
                array[indexCompare]=placeHolder; 
            }
        }
    }
    
    //result
    printf("Result:");
    for(index=0; index<10; index++){
        printf(" %d", array[index]);
    }
    return 0;
}



