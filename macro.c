/*Write a simple macro for comparing two numbers (input from user)*/
#include <stdio.h>
#include <stdlib.h>

#define cmp_nums(num1, num2) {((num1) >= (num2))? ( ((num1) > (num2))? (printf("\n%g is greater than %g.\n", (num1), (num2) )):(printf("\n%g is equal to %g.\n", (num1), (num2) ))) :(printf("\n%g is less than %g.\n", (num1), (num2)));}

int main()
{
  double num1=0,num2=0;
  char str[100]={'\0'};

  printf("\nEnter number 1 :");
  scanf("%s",str);
  num1 = atof(str);							//stdlib routine to convert string num to float
  printf("\nEnter number 2 :");
  scanf("%s",str);
  num2 = atof(str);

  cmp_nums(num1, num2);       	//replacecs with  macro 

  return 0;
}
