#include<stdio.h>
int main(void){
 int max =15, N = 20;
 int i;
 int a[N];
 
 
 for(i = 0;i < N;i++){
  a[i] = i + 1;
  }
  
  int x = 0,y =0,z = 0;
  
  printf("x=");
  scanf("%d", &x);
  printf("y=");
  scanf("%d", &y);
  printf("z=");
  scanf("%d", &z);
  
  if((y > (N - z)) || (x <= 0) || (y <= 0) || (z <= 0) || (x + y -1 > N)){
  printf("error\n");
  return 0;
  
  }
  
  if(x<=z)
   for(i =0;i<y;i++){
   a[z + y - 2 -i] = a[x + y - 2 -i];
   }
   
   
   if(x>z)
    for(i =0;i<y;i++){
   a[z - 1 + i] = a[x - 1 + i];
   }
   
   for(i=0;i<N;i++){
   printf("%d ",a[i]);
   }
   
   printf("\n");
   return 0;
   }
   
