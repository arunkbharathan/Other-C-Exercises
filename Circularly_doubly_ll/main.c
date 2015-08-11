/*Implement Doubly Linked Circular List*/
#include "headers.h" 

int main()
{
  char c=0;				//from getchar
  int data=0, pos=0;    //holds data and position
  DLL *dummy = NULL;	// a duumy pointer to struct

  c = print1();
  switch(c)
  {
    case '1':
      data = enterData(0);
      addNode(&dummy, data);
      break;
      
    default:
      exit(EXIT_SUCCESS);
  }

  while(1)
  {
    c = print2();
    switch(c)
    {
      case '1':
        data = enterData(0);
        pos = enterData(1);
        insertNode(&dummy, data, pos);       
        break;
        
      case '2':
      	data = enterData(0);
      	appendNode(&dummy, data);
        break;
        
      case '3':
      	pos = enterData(1);
      	deleteNode(&dummy, pos); 
      	break;
        
      case '4':
      	printNode(dummy);
        break;
        
      case '5':
        exit(EXIT_SUCCESS);
        
      default:
        break;
    }

  }
  
  exit(0);
}
