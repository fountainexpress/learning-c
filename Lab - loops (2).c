/******************************************************************************

Author: Yunzhu Shen
Date: Feb 14, 2020
Description: Lab - Loops Problem 2

*******************************************************************************/

#include <stdio.h>

int main(){
    int integer, multiple = 1;
    printf("This program  prints the multiplication table (from  x 1 to  x 10) of any integer.\n");
    printf("Please enter any integer:");scanf("%d", &integer);
    while( multiple <= 10){
        printf("%d ", integer*multiple);
        multiple++;
    }
    return 0;
}
