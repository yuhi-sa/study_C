#include<stdio.h>

typedef struct node{
  int num;
  struct node *next;
}NODE;

int main(){
  NODE *list, *p;
  NODE first, second,third;
  
  first.num = 63;
  second.num = 27;
  third.num = 82;
  
  list = &first;
  
  first.next = &second;
  second.next = &third;
  third.next = NULL;
  
  p = list;
  while(p != NULL){
    printf("%d ", p->num);
    p = p->next;
  }
  printf("\n");
  return 0;
  }
