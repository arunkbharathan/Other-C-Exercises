#ifndef STRUCT
#define STRUCT           //include only 1 time
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#endif
 
struct Stack{                 //unit element of stack structure
  int data;
  struct Stack *next_node;
};

typedef struct Stack stack_var;

void Push(stack_var**, int);
int Pop(stack_var**);
