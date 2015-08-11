/*Write a simple program that takes in two strings from user (print & scan) compare and provides the results.*/
#include <stdio.h>
#include <string.h>

int main()
{
  int ret=0;							//value to hold result of comparison
  char str1[100]={'\0'}, str2[100]={'\0'};		//to hols strig

  printf("\nEnter string 1: ");
  scanf("%s",str1);
  printf("\nEnter string 2: ");
  scanf("%s",str2);

  ret = strcmp(str1, str2);        //string.h routine to compare strings

  if(ret < 0)
   {
      printf("\nstring1 is less than string2\n");
   }
   else if(ret > 0) 
   {
      printf("\nstring2 is less than string1\n");
   }
   else 
   {
      printf("\nstring1 is equal to string2\n");
   }
   
   return(0);
}
