#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*バブルソート*/
#define N 50000
void bubble_sort(int n, int*a){
int i, j, tmp;
for(i=1;i<n;i++){
for(j=n-1;j>=i;j--){
if(a[j-1] > a[j]){
    tmp = a[j-1];
    a[j-1] = a[j];
    a[j] = tmp;
                  }
                    }
                }
                                }
 void print_array(int*ary, int size){
  int i;
  for(i=0; i<size; ++i)
    printf("%d ", ary[i]);
    printf("\n\n");
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
   bubble_sort(N ,ary);
  print_array(ary, N);
  return 0;
}
