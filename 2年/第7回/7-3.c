#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 100
#define EPS 1.0e-5

float f(float x){
double a = sin(x+10);
double b = cos(x-20);
  return a*b + 2*(x-0.05)*(x-0.05)*(x-0.05) - 1.75*x;
}

float df(float x){
double x0, h, L;
h = 0.001;
L =(f(x+h) - f(x))/h;
return L; 
  }
  
int main(){
  int i = 1;
  float x, new_x;
  scanf("%f",&x);
 
  while(1){
    new_x = x - f(x)/df(x);
    printf("%d:x=%.10f, new_x=%.10f\n" , i++, x, new_x);
    if(fabsf(new_x-x) < EPS) break;
    if(i > MAX){
      printf("not converged\n");
      exit(1);
      }
      x = new_x;
      }
      printf("x = %.10f\n", new_x);
      return 0;
   }
