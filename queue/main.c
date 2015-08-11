/*Implement Queue (using pointers)*/
#include "struct.h"

int main()
{
  struct CPFB SPFB1;                    //CPFB:Collection of Pointer to Front & Back of queue
  SPFB1.PBQ = SPFB1.PFQ = NULL;			//SPFB1:Structer Pointing to Front and Back of queue number 1
  										//PFQ: Pointer to Front of Queue
  										//PBQ: Pointer to Back of Queue

  Enqueue(&SPFB1, 1);
  Enqueue(&SPFB1, 2);
  Enqueue(&SPFB1, 3);
  printf("\nEnqueued 1,2,3\n");
  printf("Dequeueing 3 times\n");
  printf("Dequeue1 %d\n", Dequeue(&SPFB1));
  printf("Dequeue2 %d\n", Dequeue(&SPFB1));
  printf("Dequeue3 %d\n", Dequeue(&SPFB1));
  
  return 0;
}
