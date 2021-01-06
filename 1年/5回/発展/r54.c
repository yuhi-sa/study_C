#include<stdio.h>
main()
{
	int a=2, b, c=2;
	scanf("%d",&b);
		
	while(b%a == 0)
	{
		if(b%a == 0)
		{
		printf("%d", a);
		b /=a;
		break;
		}else
	a++;
	}
			
	
	while(b != 1)
	{
		if(b%c == 0)
		{
		printf("*%d", c);
		b /= c;
		}
	else
	c++;
	}
	printf("\n");
}

