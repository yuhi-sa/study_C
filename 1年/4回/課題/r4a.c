#include<stdio.h>
main()
{
	int i ;
	for (i=1; i<=60; i++)
	{
	    if((i%4==1)||(i%4==2)||(i%4==3))
	    {
		printf("%d,",i);
            }
	}
}
