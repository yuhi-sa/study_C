#include<stdio.h>

typedef struct complex{
    double re;
    double im;
   }COMPLEX;
   
COMPLEX addComplex(COMPLEX x,COMPLEX y){
  COMPLEX a;
  
  a.re = x.re + y.re;
  a.im = x.im + y.im;

  return(a);
  
  }
  
COMPLEX mulComplex(COMPLEX x,COMPLEX y){
  COMPLEX b;
  
  b.re = x.re*y.re - x.im*y.im;
  b.im = x.re*y.im + x.im*y.re;
  return(b);
  
  }
  
int main(){
  COMPLEX x;
  COMPLEX y;
    
  printf("x.re=\n"); 
  scanf("%lf",&x.re);
  printf("x.im=\n"); 
  scanf("%lf",&x.im);
  printf("y.re=\n"); 
  scanf("%lf",&y.re);
  printf("y.im=\n"); 
  scanf("%lf",&y.im);
  
  COMPLEX a=addComplex(x, y);
    printf("和は%3.1lf + %3.1lf\n", a.re, a.im);
  
  COMPLEX b=mulComplex(x, y);
  printf("積は%3.1lf + %3.1lf\n", b.re, b.im);
  return 0;
  }
 
  
