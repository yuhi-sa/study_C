#include <stdio.h>
#include <math.h>
int main (int argv,char *argc[])
 {
	char c;
	int n = 0,sum = 0,sums = 0,x;
	double ave,V,D;

	FILE  *fp;
	fp = fopen (argc[1],"r");

	while (fp == NULL) {
		printf ("error\n");
		return 1;
	                    }
	
	while (fscanf (fp,"%d",&x)==1)	{
		sum += x;
		sums += x*x;
		n++;
		                    }
	
	ave = (double)sum / n;
	V = fabs(((double)sums / n) - ave * ave);
	D = sqrt (V);
	printf("%d / %d = %1f\n",sum,n,ave);
	printf("Variance: %1f\n", V);
	printf("Standard deviation: %1f\n", D);
	return 0;
                  }

