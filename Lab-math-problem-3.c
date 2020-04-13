/******************************************************************************

Author: Yunzhu Shen
Date: Mar 5,2020
Description: Lab-math-problem-3

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main(){
    float energy, chargeDensity = 1.5E-9,  permittivity = 8.85E-12, distance;
    printf("This program computes the electric field intensity of a point charge.\n");
    printf("Please enter the distance from the charge in m: \n");
    scanf(" %f", &distance);
    energy = chargeDensity / (2 * pi * permittivity * distance);
    printf("The energy at distance %0.2fm is %0.2fJ", distance, energy);
    return 0;
}
