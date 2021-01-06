#include<stdio.h>
#include<math.h>

double f(double x){
double y= tan(x)*tan(x);
return y;
}

int main(){
int n, i;
double a, b, S, x0, x1;
a = 0;
b = 1;
n = 10;
S =0;

x0 = a;
x1 = (b-a)/n;

for(i=0;i<=n-1;i++){
  x1 = x0 + (b-a)/n;
  S += (b-a)/n*((f(x0)+f(x1))/2);
  x0 = x1;
  x1 += (b-a)/n;
  }
  
 printf("S = %lf\n",S);
 
 return 0;
 
} 
