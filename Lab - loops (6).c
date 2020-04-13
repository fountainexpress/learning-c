/******************************************************************************

Author: Yunzhu Shen
Date: Feb 14, 2020
Description: Lab - Loops Problem 6

*******************************************************************************/

#include<stdio.h>

int main() {
    int row, column;
    for (row=1; row<=5; row++) {
        for (column=1; column<=row; column++){
            printf("%d ", column); 
        }
        printf("\n");
    }
    return 0;
}