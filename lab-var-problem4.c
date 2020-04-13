#include <stdio.h>

/*******************************
Author: Yunzhu Shen
Date: Jan 29, 2020
Description: Lab Var Problem 4
*******************************/

int main(){
  float number1, number2, number3, number4;
  printf("Please enter four numbers, seperated by space:\n");
  scanf("%f %f %f %f", &number1, &number2, &number3, &number4);
  printf("Output: \n%f    %f \n%f    %f\n", number1, number2, number3, number4);
  return 0;
}