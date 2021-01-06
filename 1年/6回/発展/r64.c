#include<stdio.h>
main()
{
	int a[10],n,o,max,sum,min;
	float ave,var,sum2;

	for(n=0;n<=9;n++)
	{
	scanf("%d",&a[n]);
	if(a[n]<0)
		break;
	}

	sum = 0;
	max = a[0];
	min = a[0];

	for(o=0;o<=n-1;o++)
	{

	if(max<=a[0])
	{
	max = a[o];
	}

	if(min>= a[o])
	{
	min = a[o];
	}

	sum +=a[o];
	}

	ave = sum/(float)n;
	sum2=0;
	
	for(o=0; o<=n-1;o++)
	{
	sum2 +=(a[o]-ave)*(a[o]-ave);
	}
	var =sum2/(float)n;

	printf("人数:%d\n",n);
	printf("最高点:%d\n",max);
	printf("最低点:%d\n",min);
	printf("平均点:%.4f\n",ave);
	printf("分散:%.4f\n",var);
}
