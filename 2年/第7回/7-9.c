#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define EPS 1.0e-5

float f(float x){
double n = sin(x+10);
double m = cos(x-20);
  return n*m + 2*(x-0.05)*(x-0.05)*(x-0.05) - 1.75*x;
}
  
int main(){
float a,b,c,d,e,i;

printf("a=");
scanf("%f",&a);
printf("b=");
scanf("%f",&b);



while(1){
c = (a+b)/2;

if(f(c)>=0){
if(f(a)>=0){
d = c;
c = a;
a = d;
}
if(f(b)>=0){
e = c;
c = b;
b = e;
}}

if(f(c)<0){
if(f(a)<0){
d = c;
c = a;
a = d;
}
if(f(b)<0){
e = c;
c = b;
b = e;
}}
if(f(c)==0) break;
i++;
if(i==1000) break;

               }

printf("%f\n",c);

return 0;
}

