#include<stdio.h>
main()
{

int i=2;
int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

a[0]=1;
a[1]=1;

for(i=2;i<=20;i++)
{
a[i]=a[i-1]+a[i-2];
}

for(i=0;i<=19;i++)
{
printf("a[%2d]=%5d, a[%2d]/a[%2d]=%f \n",i+1,a[i+1],i+1,i,(float)a[i+1]/(float)a[i]);
}

}
