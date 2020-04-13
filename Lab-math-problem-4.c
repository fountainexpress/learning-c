/******************************************************************************

Author: Yunzhu Shen
Date: Mar 5,2020
Description: Lab-math-problem-4

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){
    float V_out, V_1, V_2;
    int R_1 = 5E3, R_2 = 3E3, R_f = 10E3;
    printf("This program computes the voltage output from an op-amp.\n");
    printf("Please enter V1 and V2 separated by space: \n");
    scanf(" %f %f", &V_1, &V_2);
    V_out = -1 * R_f * (V_1 / R_1 + V_2 / R_2);
    printf("The final Voltage is %0.2fV", V_out);
    return 0;
}
