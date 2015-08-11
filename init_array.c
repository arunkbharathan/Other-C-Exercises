/*Write a single line statement that initializes all elements in array as "0"*/
#include <stdio.h>
#define LIM 100

int main()
{
  int a[100] = {0};  //init all the elements to 0;
  int i=0;			// loop variable

  putchar('\n');
  for(i = 0; i < LIM; i++)			//print array
    printf(" %d ", a[i]);
  putchar('\n');

  return 0;

}
