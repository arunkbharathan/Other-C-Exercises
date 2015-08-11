#include "headers.h"

char print1()
{
  char c=0;
  printf("\n\t1. Add Node.");
  printf("\n\t*. Press any other key to exit.\n->");
  scanf("%c",&c);
  getchar();					//to  clear a newline chara from buffer
  return c;
}

char print2()
{
  char c=0;
  
  printf("\n\t1.Insert Node.");
  printf("\n\t2.Append Node.");
  printf("\n\t3.Delete Node.");
  printf("\n\t4.Print Node.");
  printf("\n\t5.Exit.\n->");
	
  scanf("%c",&c);
  getchar();
  return c;
}

int enterData(int f)
{
  int data=0;
  char str[100];
  if(f==0)
  	printf("\nEnter integer:");
  else
  	printf("\nEnter position:");
  scanf("%s",str);
  getchar();
  data = atoi(str);
  return data;
}
