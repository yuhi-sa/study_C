#include<stdio.h>
/*クイックソート*/
#define N 10

void print_array(int*ary, int size){
  int i;
  for(i=0; i<size; ++i)
    printf("%d ", ary[i]);
    printf("\n\n");
}

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
   print_array(ary, N);
}
if(begin <i-1)quick_sort(ary, begin, i-1);
if(j+1<end)quick_sort(ary, j+1, end );
}



int main(){
  FILE *fp;
  int ary[N];
  int i;
  fp=fopen("b.txt", "r");
  for(i=0; i<N; i++)
   fscanf(fp, "%d", &ary[i]);
   fclose(fp);
  print_array(ary, N);
   quick_sort(ary, 0, N-1);
  print_array(ary, N);
  return 0;
}

