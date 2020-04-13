/******************************************************************************

Author: Yunzhu Shen
Date: Mar 10, 2020
Description: Lab-arrays-problem-4

*******************************************************************************/

#include <stdio.h>

int main(){
    int array[10] = {45,67,23,48,34,65,98,30,5,10};
    int index, largest, smallest;
    printf("This  program finds the largest and smaller number in a nonsorted array.\n");
    
    //initially assume largest/ smallest value is first item
    largest = array[0]; 
    smallest = array[0];
    
    //go through array item by item
    for(index=1; index<10; index++){
        
        //compare and reassign largest and smallest 
        if (array[index] < smallest){
            smallest = array[index];
        }
        if (array[index] > largest){
            largest = array[index];
        }
    }
    
    //result
    printf("Result:\n");
    printf("Largest %d \nSmallest %d", largest, smallest);
    return 0;
}



