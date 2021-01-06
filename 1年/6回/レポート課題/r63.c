#include<stdio.h>
main()
{
	int n;
	int a[11];
	for(n=0; n<=10; n++)
	{
	scanf("%d",&a[n]);
	}
	
	float b=a[10]+0.0;
	
	for(n=9;n>=0;n--)
	{
	b=a[n]+1/b;
	}
	
	printf("%f\n",b);
}
