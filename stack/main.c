/*Implement Stack (using pointers)*/
#include "struct.h"   //header includes all std library needed + struct,fun declaration,typedef

int main()
{
  stack_var *PTS1 = NULL;    //Pointer to Top of Stack number 1


  Push(&PTS1, 10);
  Pop(&PTS1);
  Pop(&PTS1);          //Popping past the only element for checking

  Push(&PTS1, 1);
  Push(&PTS1, 2);
  Push(&PTS1, 3);
  printf("\nPushed 1,2,3\n");
  printf("Popping 3 times\n");
  printf("pop1 %d\n", Pop(&PTS1));   //pushing & popping 3 times to see if output is in correct order
  printf("pop2 %d\n", Pop(&PTS1));
  printf("pop3 %d\n", Pop(&PTS1));
  return 0;
}
