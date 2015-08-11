/*Write a generic function "calculate" - that computes sum, difference, product and quotient. Use function pointers and switch/case*/
#include <stdio.h>
#include <stdlib.h>

double calculate( double (*f)(double,double), double, double ); //prototype of calculate

double add(double m1, double m2) //addition of 2 numbers
{
  return m1 + m2;
}

double sub(double m1, double m2) //subtraction
{
  return m1 - m2;
}

double mul(double m1, double m2)  //multiplication
{
  return m1 * m2;
}

double divn(double m1, double m2)  //division
{
  return m1 / m2;
}

double calculate( double (*f)(double,double), double m1, double m2 )
{
  return f(m1,m2);
}

int main()
{
  double num1=0, num2=0;
  char str[100]={'\0'}, c=0;

do
{
  printf("\nEnter number 1 :");
  scanf("%s",str);
  num1 = atof(str);					//stdlib routine to convert string num to float
  printf("\nEnter number 2 :");
  scanf("%s",str);
  num2 = atof(str);

  printf("\tDo what ?");
  printf("\t1.Addition");
  printf("\t2.Subtraction");
  printf("\t3.Multiplication");
  printf("\t4.Division");
  printf("\nEnter Option:");
  getchar();                    //to remove a newline chara from buffer 
  c = getchar();
  c = c - '0';
  printf("\x1b[31m");            //to print result in red
    switch(c)
    {
      case 1:
        printf("\n%g + %g = %g\n", num1, num2, calculate(add, num1, num2));   //calculate does addition of 2 numbers using function pointers
        break;

      case 2:
        printf("\n%g - %g = %g\n", num1, num2, calculate(sub, num1, num2));
        break;

      case 3:
        printf("\n%g * %g = %g\n", num1, num2, calculate(mul, num1, num2));
        break;

      case 4:
        (num2 != 0)? printf("\n%g / %g = %g\n",num1, num2, calculate(divn, num1, num2) ) : printf("\n%g / %g = undefined\n",num1, num2);    //ternery case to avoid divide by 0
        break;

      default:
        break;
    }

  printf("\x1b[0m");       //reset color

}while(c < ('A'-'0'));    // enter any alphabet to exit

 return 0;
}
