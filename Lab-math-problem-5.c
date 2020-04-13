/******************************************************************************

Author: Yunzhu Shen
Date: Mar 5,2020
Description: Lab-math-problem-5

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define pi acos(-1)

int main(){
    float depth, angleDegree, angleRadian;
    int cableLength = 50;
    printf("This program computes the depth under the boat.\n");
    printf("Please enter the 50m wire to seabed angle in degrees: \n");
    scanf(" %f", &angleDegree);
    angleRadian = angleDegree * pi / 180;
    depth = sin(angleRadian) * cableLength;
    printf("The depth below the boat is %0.2fm", depth);
    return 0;
}
