/*Factorial finding - implementation using both recursion and non-recursion*/

#include <stdio.h>
#include <ctype.h>

unsigned long FactorialLoop(unsigned long);
unsigned long FactorialRecur(unsigned long);
int atoi(char s[]);


int main()
{
  char str[20]={'\0'};						    //to hold string input
  unsigned long num=0;					//stores integer value
  unsigned long result=0;					//result variable

  do
  {
    printf("\nEnter a positive integer less than 21 :");
    scanf("%s",str);
  }while( atoi(str) < 0 || atoi(str) > 20 );					//pgm fails for value larger than 21!
  
  num = (unsigned long)atoi(str); 							//string to integer

  if( (result = FactorialLoop(num)) == FactorialRecur(num) ) //Checks if factorial returned by both version same.
    printf("\nFactorial is %lu\n",result);
  else
    printf("\nSome error occured.\n");

  return 0;
}


unsigned long FactorialLoop(unsigned long num) // Finds factorial using loop
{
  unsigned long result = 1;

  for(;num > 0;num--)  
    result *= num;     // like n*(n-1)*...*1

  return result;
}


unsigned long FactorialRecur(unsigned long num)  // Find factorial using recursion
{
  unsigned long result = 1;

  if(num == 0)
    return 1;
  else
    result = num * FactorialRecur(num-1);   //like n*(n-1)! till 1*(0!)

  return result;
}


int atoi(char s[])
	{
		int i, n, sign;

		for (i = 0; isspace(s[i]); i++)   //skip white space
			;
		if(isalpha(s[i]))                 //if user inputs alphabets in between skips conversion
		    return -1;

		sign = (s[i] == '-') ? -1 : 1;    // determines sign

		if (s[i] == '+' || s[i] == '-')
			i++;                            // skipes sign
		if(isalpha(s[i]))
		  return -1;

				
		for (n = 0; isdigit(s[i]); i++)
			n = 10 * n + (s[i] - '0');        // negate ascii value and increment position
			
		if(isalpha(s[i]))
		  return -1;

		return sign * n;
	}
