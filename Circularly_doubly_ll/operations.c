#include "headers.h"

//PPDL: Pointer Pointing to Doubly Linkd List
//PDL: Pointer to Doubly Linked List

void addNode(struct DLL** PPDLL, int data)   //addnode to empty list
{
  DLL *new = (DLL*)malloc(sizeof(DLL));
  assert(new != NULL);
  new->data = data;

  new->next_node = new;
  new->prev_node = new;
  *PPDLL = new;
}

int insertNode(struct DLL** PPDLL, int data, int pos)   //insert node if list empty calls addnode
{
  if(*PPDLL == NULL)
	{
		addNode(PPDLL,data);							//start fresh
		return 0;
	}  	
  	
  DLL *new = (DLL*)malloc(sizeof(DLL));
  assert(new != NULL);
  DLL *tmp = NULL;

  new->data = data;

  tmp = *PPDLL;
  for(;pos>0;pos--)
    tmp = tmp->next_node;
  for(;pos<0;pos++)
    tmp = tmp->prev_node;
  if(tmp == *PPDLL)                 //if new node is inserted at 0 position, this line changes *PPDLL appropriately
  	  *PPDLL = new;

  tmp->prev_node->next_node = new;
  new->prev_node = tmp->prev_node;
  tmp->prev_node = new;
  new->next_node = tmp;
  return 0;
}

int appendNode(struct DLL** PPDLL, int data)   //add new node at the end
{
  if(*PPDLL == NULL)							// if list empty calls addNode
    {
	   addNode(PPDLL,data);
		return 0;
	}

	DLL *new = (DLL*)malloc(sizeof(DLL));
	assert(new != NULL);
	DLL *tmp = NULL;
    new->data = data;

	tmp = *PPDLL;
	
	tmp->prev_node->next_node = new;
	new->prev_node = tmp->prev_node;
	tmp->prev_node = new;
	new->next_node = tmp;
	return 0;
}

void deleteNode(struct DLL** PPDLL, int pos)    // delete node at given pos
{
  DLL *tmp = NULL;
  tmp = *PPDLL;

  for(;pos>0;pos--)
    tmp = tmp->next_node;
  for(;pos<0;pos++)
    tmp = tmp->prev_node;
  if(tmp == *PPDLL)								//if node to delete is 0 node
	  *PPDLL = tmp->next_node;
  if(tmp->next_node == tmp->next_node->next_node)   //if this is the last node
	  *PPDLL = NULL;

  tmp->prev_node->next_node = tmp->next_node;	 //delink the node going for deletion
  tmp->next_node->prev_node = tmp->prev_node;

  free(tmp);
}

void printNode(struct DLL* PDLL)   //print nodes
{
  DLL *tmp = NULL;
  if(PDLL != NULL)					//skips if empty
  {
  	tmp = PDLL;
  	
    putchar('\n');
    do
    {
      printf("%d  ",tmp->data);
      tmp=tmp->next_node;				//navigate through ll
    }while(tmp != PDLL);
  }
}
