#include<stdio.h>
#include<math.h>
double f(double x){
	double y;
	y = 1 / sqrt( 1 + sqrt(x) );
	return y;
}

int main() {
	int n, i;
	double a,b,s,x0,x1,d;
	a = 0;
	b = 1;
	n = 100;
	x0 = a;
	d = (b -a)/n;
	s = 0;
	for(i=0; i<=n-1;i++){
		x1 = x0 + d;
		s += d * (f(x1) + f(x0) ) /2;
		x0 = x1;
	}
	printf("s = %lf¥n" ,s);
	return 0;
}