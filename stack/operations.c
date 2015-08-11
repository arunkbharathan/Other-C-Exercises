#include "struct.h"

void Push(stack_var **PPTS , int data)  //PPTS: Points to Pointer to Top of Stack
{

  stack_var *tmp = (stack_var*)malloc(sizeof(stack_var));
  assert(tmp != NULL);                                      //alerts by stopping pgm if malloc can't allocate
  tmp->data = data;											//saves data
  tmp->next_node = *PPTS;								    //adds to top of stack

  *PPTS = tmp;											    //make *ppts point to new element 
}

int Pop(stack_var **PPTS)      //PPTS: Points to Pointer to Top of Stack
{
	if(*PPTS != NULL)				//check if user tried to pop past the stack
	{
		int data = (*PPTS)->data;     //extracts data
		stack_var *tmp;
		tmp = *PPTS;
		*PPTS = tmp->next_node;		//make *ppts point to adjacent element 

		free(tmp);                  //reverse of malloc
		return data;
	}
	printf("\nStack Empty\n");
	return 0;
}
