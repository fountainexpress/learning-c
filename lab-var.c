#include <stdio.h>

/*******************************
Author: Yunzhu Shen
Date: Jan 29, 2020
Description: Lab Var
*******************************/

int main(){
  int Fahrenheit, Celsius;
  Celsius = (Fahrenheit - 32)*0.5556;
  printf("Please enter your desired temperature in Fahrenheit:\n");
  scanf("%d", &Fahrenheit);
  printf("Output: %d F = %d C\n", Fahrenheit,  Celsius );

  return 0;
}
