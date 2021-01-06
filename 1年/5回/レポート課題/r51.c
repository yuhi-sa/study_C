#include<stdio.h>
main()
{
	int i;

	for(i=20; i>0; i--)
	{
		if(i%2==0)
		printf("%d,",i);
	}
	printf("\n");
	i=20;
	while(i>0)
	{
		if(i%2==0)
		printf("%d,",i);
		i--;
	}
	printf("\n");
	i=20;
	do{	
	if(i%2==0)
		printf("%d,",i);
		i--;
	 }	
	while(i>0);
	printf("\n");
	
	
}



