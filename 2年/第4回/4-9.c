#include<stdio.h>
#define N 10

void quick_sort(int *ary, int begin, int end){
int i, j, work, pivot;
pivot = ary[(begin + end)/2];
i=begin;
j=end;
while(1){
  while(ary[i] < pivot) ++i;
  while(ary[j] > pivot) --j;
  if(i >= j)break;
  work = ary[i];
  ary[i] = ary[j];
  ary[j] = work;
  i++;
  j--;
}
if(begin <i-1)quick_sort(ary, begin, i-1);
if(j+1<end)quick_sort(ary, j+1, end );
}

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
  int i;
  fp=fopen("c.txt", "r");
  for(i=0; i<N; i++)
   fscanf(fp, "%d", &ary[i]);
   fclose(fp);
 
   quick_sort(ary, 0, N-1);
 
  
    int x, idx;
    
    printf("Input number: ");
    scanf("%d" , &x);
    idx = rbinsearch(ary, 0, N-1, x);
    if(idx != -1)
      printf("%dは添字%d番目に見つかりました。\n", x, idx);
    else
      printf("%dは見つかりませんでした。\n", x);
      return 0;
}

