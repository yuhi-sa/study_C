#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node *next;
  }NODE;
  
NODE *newNODE();
NODE *insertHead(NODE *list, int addedNum);
void showList_loop(NODE*list);