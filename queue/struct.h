#ifndef STRUCT
#define STRUCT            //include 1 time only 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#endif

struct Queue{					//Unit element of queue is a doubly linked list
  struct Queue *next_node;
  int data;
  struct Queue *prev_node;
};

typedef struct Queue queue_var;

struct CPFB{					//CPFB:Collection of Pointer to Front & Back of queue
  queue_var *PFQ;
  queue_var *PBQ;				//PFQ: Pointer to Front of Queue
  								//PBQ: Pointer to Back of Queue
};



void Enqueue(struct CPFB*, int);           
int Dequeue(struct CPFB*);
