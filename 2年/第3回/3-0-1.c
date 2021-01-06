#include<stdio.h>
int main(void){
int A;
int Fib1(int n){
  if(n < 2)
      return n;
  else
      A++;
      return Fib1(n-2) + Fib1(n-1);     
  }
  
  int n;
  scanf("%d",&n);
 
  printf("A(%d)=%d\n",n.A);
  
  }
