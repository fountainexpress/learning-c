/******************************************************************************

Author": Yunzhu Shen
Date: Mar 5,2020
Description: Lab-math-problem-2

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    float energy, mass = 10.5E-3, velocity;
    printf("This program computes the kinetic energy of an 10.5mg object in motion: \n");
    printf("Please enter the velocity in m/s: \n");
    scanf(" %f", &velocity);
    energy = 0.5 * mass * pow(velocity,2);
    printf("The energy at velocity %0.3fm/s is %0.3fJ", velocity, energy);

    return 0;
}
