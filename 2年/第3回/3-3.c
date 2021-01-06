#include<stdio.h>

int Fib2(int n){
  int f0=0, f1=1, f2;

  while(f1<n) {   
    f2 = f1 + f0;
    f0 = f1;
    f1 = f2;
    }
    
    
    printf("%d\n",f1);
    
    return 0;
}


int main(void){
int n;
   scanf("%d",&n);
    Fib2(n);
    return 0;
}
