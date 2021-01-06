#include<stdio.h>
main()
{
	int i ;
	int l ;
	l=0;
	for (i=10000; i<=99999; i++)
	{
	    if((i%5==0)&&(i%4!=0))
	   {	
	    l=l+1;
   }
	}
	printf("%d",l);
}	
