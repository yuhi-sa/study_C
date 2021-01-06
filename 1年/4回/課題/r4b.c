#include<stdio.h>
main()
{
	int i ;
	for (i=1; i<=60; i++)
	{
	    if(i%5==0)
{	
	printf("[%d]",i);
}
	else if((i%4!=0))
	    {
		printf("%d,",i);
            }
	}
}
