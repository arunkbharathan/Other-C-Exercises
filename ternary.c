/*Write a simple function for comparing two numbers (input from user) using ternary operation*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
  double num1=0,num2=0;					//variables to store numerics
  char str[100]={'\0'};					//to save input using scanf

  printf("\nEnter number 1 :");
  scanf("%s",str);
  num1 = atof(str);					//string to float
  printf("\nEnter number 2 :");
  scanf("%s",str);
  num2 = atof(str);

  (num1 >= num2)? ( (num1 > num2)? (printf("\n%g is greater than %g.\n", num1, num2 )):(printf("\n%g is equal to %g.\n", num1, num2 ))) :(printf("\n%g is less than %g.\n", num1, num2));

  return 0;
}

