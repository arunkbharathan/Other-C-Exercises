#include "struct.h"

void Enqueue(struct CPFB* CPFBn , int data)  //CPFB:Collection of Pointer to Front & Back of queue
{											 //CPFBn CPFB to n-th queue 
  queue_var *new = (queue_var*)malloc(sizeof(queue_var));
  assert(new != NULL);
  new->data = data;
  new->prev_node = NULL;						//just added nodes prev node is null for now

  if(CPFBn->PBQ == CPFBn->PFQ)					//if front == back nodes 
  {
	  if(CPFBn->PFQ == NULL)					//if no lements in queue
    {
      CPFBn->PFQ = new;
		  CPFBn->PBQ = new;
		}
		else									//if only 1 element in queue
	  {
		  new->next_node = CPFBn->PBQ;
		  CPFBn->PBQ->prev_node = new;
		  CPFBn->PBQ = new;
	  }
  }
  else
  {
	  new->next_node = CPFBn->PBQ;				//when queue consists of more than 2 elements
	  CPFBn->PBQ->prev_node = new;
	  CPFBn->PBQ = new;
  }
}

int Dequeue(struct CPFB* CPFBn )                //CPFB:Collection of Pointer to Front & Back of queue
{									           //CPFBn CPFB to n-th queue 
	int data=0;

	if(CPFBn->PBQ == CPFBn->PFQ)	          //if front == back nodes 
	{
		if(CPFBn->PFQ == NULL)		      	//if front == back = NULL
		{
			printf("\nQueue Empty\n");
			return 0;
		}
		data = CPFBn->PFQ->data;           //if front == back with a single node
		free(CPFBn->PFQ);
		CPFBn->PBQ = CPFBn->PFQ = NULL;
		return data;
	}
	else							       //when queue consists of more than 2 elements
	{
		queue_var *tmp = CPFBn->PFQ;
		CPFBn->PFQ = tmp->prev_node;
		data = tmp->data;
		free(tmp);
		return data;
	}
}

