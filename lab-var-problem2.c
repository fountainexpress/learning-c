#include <stdio.h>

/*******************************
Author: Yunzhu Shen
Date: Jan 29, 2020
Description: Lab Var Problem 2
*******************************/

int main(){
  float Fahrenheit, Celsius;
  printf("Please enter your desired temperature in Celsius, following the letter C:\n");
  scanf("%f", &Celsius);
  Fahrenheit = Celsius * 1.8 + 32;
  printf("Output: %f C = %f F\n", Celsius,  Fahrenheit );
  return 0;
}
