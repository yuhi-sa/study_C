#include<stdio.h>
int main(void){
int A=0;

int Fib1(int n){

  if(n < 2)
      return n;
  else
      A++;
      return Fib1(n-2) + Fib1(n-1);     
  }
  
  int n;
  scanf("%d",&n);
 Fib1(n);
  printf("A(%d)=%d\n",n,A);
  
  }
