/*Write a simple program that intakes two numbers and returns (to the caller) sum, difference, product and quotient*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
  double num1=0,num2=0;			// holds input numbers
  char str[100]={'\0'};           //to read in nums using scanf

  printf("\nEnter number 1 :");
  scanf("%s",str);
  num1 = atof(str);               //stdlib routine to convert string num to float 
  printf("\nEnter number 2 :");
  scanf("%s",str);
  num2 = atof(str);

  printf("\n%g + %g = %g", num1, num2, num1+num2);
  printf("\n%g - %g = %g", num1, num2, num1-num2);
  printf("\n%g * %g = %g", num1, num2, num1*num2);
  (num2 != 0)? printf("\n%g / %g = %g\n",num1, num2, num1/num2) : printf("\n%g / %g = undefined\n",num1, num2);    //ternery case to prevent divide by zero

  return 0;
}

