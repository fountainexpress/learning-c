#include <stdio.h>

/*******************************
Author: Yunzhu Shen
Date: Jan 29, 2020
Description: Lab Var
*******************************/

int main(){
  float Fahrenheit, Celsius;
  printf("Please enter your desired temperature in Fahrenheit:\n");
  scanf("%f", &Fahrenheit);
  Celsius = (Fahrenheit - 32) * 0.5556;
  printf("Output: %f F = %f C\n", Fahrenheit,  Celsius );
  return 0;
}
