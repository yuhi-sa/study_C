#include<stdio.h>
int main(void){

int Fib2(int n){
  int i;
  int F[1000];
  F[0] = 0; F[1] = 1;
  for( i = 2; i <=n ; i++){
    F[i] = F[i-2] + F[i-1];
    }
  printf("%d\n",F[n]);  
  return F[n];
  }


int n;
  scanf("%d",&n);
  Fib2(n);

}
