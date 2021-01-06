#include<stdio.h>
main()
{
	int y=2016;
	int m=1;
	int d=1;
	int q;
	int p;
	int r;
	int s;
	int t;
	int w;
	q=y/4;
	p=y/100;
	r=y/400;
	s=13*m+8;
	t=s/5;
	w=q+p+r+t+d;
	
	if(w%7==0)
	{
	printf("%d/%d/%d is",y,m,d);
	printf("Sunday");
	}
	else if(w%7==1)
	{
	printf("%d/%d/%d is",y,m,d);
	printf("Monday");
	}
	else if(w%7==2)
	{
	printf("%d/%d/%d is",y,m,d);
	printf("Tuesday");
	}
	else if(w%7==3)
	{
	printf("%d/%d/%d is",y,m,d);
	printf("Wednesday");
	}
	else if(w%7==4)
	{
	printf("%d/%d/%d is",y,m,d);
	printf("Thursday");
	}
	else if(w%7==5)
	{
	printf("%d/%d/%d is",y,m,d);
	printf("Fryday");
	}
	else if(w%7==6)
	{
	printf("%d/%d/%d is",y,m,d);
	printf("Saturday");
	}
	printf("\n");
	
}
	
