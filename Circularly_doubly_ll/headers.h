#ifndef STRUCT
#define STRUCT            //include 1 time only 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#endif

struct DLL{					//Unit element of DLL is a doubly linked list
  struct DLL *next_node;
  int data;
  struct DLL *prev_node;
};

typedef struct DLL DLL;

void addNode(struct DLL** , int);
int insertNode(struct DLL** , int , int );           
int appendNode(struct DLL** , int);
void deleteNode(struct DLL** , int); 
void printNode(struct DLL* );
char print1(void);
char print2(void);
int enterData(int);
