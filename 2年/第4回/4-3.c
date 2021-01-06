#include<stdio.h>
#define N 10

int rbinsearch(int *ary, int head, int tail, int key){
  int mid = (head + tail) /2;
  if(head >tail) return -1;
  if(key < ary[mid])
        return rbinsearch(ary, head, mid-1, key);
  else if(key > ary[mid])
    return rbinsearch(ary, mid+1, tail, key);
  else return mid;
}

int main(){
    FILE *fp;
    int ary[N];
    int i, x, idx;
    
    fp =fopen("b.txt", "r");
    
    for(i=0;i<N;i++)
          fscanf(fp, "%d" ,&ary[i]);
    fclose(fp);
    
    printf("Input number: ");
    scanf("%d" , &x);
    idx = rbinsearch(ary, 0, N-1, x);
    if(idx != -1)
      printf("%dは添字%d番目に見つかりました。\n", x, idx);
    else
      printf("%dは見つかりませんでした。\n", x);
      return 0;
}
