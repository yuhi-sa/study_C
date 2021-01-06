#include"6-2-1.h"

NODE *newNODE(){
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
    newNode = newNODE();
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
