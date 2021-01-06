#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node *next;
  }NODE;
  
NODE *newNode(){
  NODE *newNode;
  newNode = (NODE*)malloc(sizeof(NODE));
  if(newNode == NULL){
    printf("memory cannot alloc!\n");
    exit(0);
    }
    return newNode;
    }

NODE *insertHead(NODE *list, int addedNum){
  NODE *newNode;
  newNode->num = addedNum;
  
  newNode->next = list;
  list = newNode;
  return list;
}

void showList_loop(NODE*list){
  NODE *p;
  p = list;
  
  if(p == NULL){
    printf("The list is NULL.\n");
    }
    else{
      while(p != NULL){
        printf("%d ", p->num);
        p = p->next;
      }
  printf("\n");
  }
  }

int main(){
  NODE *list;
  list = NULL;
  NODE *p;
 FILE *fp;
fp = fopen("a.txt","r");
int a;
while(a = NULL){
  fscanf(fp, "%d",&a);
list = insertHead(list, a);
}
  
  p = list;
  while(p != NULL){
    printf("%d ", p->num);
    p = p->next;
  }
  printf("\n");
  return 0;
  }
