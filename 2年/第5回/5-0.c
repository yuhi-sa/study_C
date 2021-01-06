#include<stdio.h>

struct complex{
  double re;
  double im;
  };
  
  int main(){
    struct complex x, y;
    
    x.re = 1.0;
    x.im = 2.0;
    
    printf("x = %3.1lf + %3.1lfi\n", x.re, x.im);
    y = x;
    printf("y = %3.1lf + %3.1lfi\n", y.re, y.im);
    return 0;
}
