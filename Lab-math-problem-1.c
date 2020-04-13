/******************************************************************************

Author": Yunzhu Shen
Date: Mar 5,2020
Description: Lab-math-problem-1

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    float x, y, Hypotenuse;
    printf("Please enter the values of x and y separated by space: \n");
    scanf(" %f %f", &x, &y);
    Hypotenuse = sqrt( pow(x, 2) + pow( y, 2) );
    printf("The Hypotenuse is %0.3f", Hypotenuse );

    return 0;
}
