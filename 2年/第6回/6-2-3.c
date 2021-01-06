#include"6-2-1.h"

int main(int argv, char *argc[]){
  NODE *list;
 FILE *fp;
fp = fopen("a.txt","r");
int a;
    
if(fp == NULL){
    printf("File open error¥n");
    return 1;
}
    while(fscanf(fp, "%d",&a) == 1){
list = insertHead(list, a);
}
    
    showList_loop(list);
  return 0;
  }
