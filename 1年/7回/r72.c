#include<stdio.h>
#include<math.h>
main()
{
	int i,j;
	float a[2][2];
	float theta;
	float x[2];
	float y[2];


	printf("回転（ラジアン）:");
	scanf("%f",&theta);


	a[0][0]=cos(theta);
	a[0][1]=-sin(theta);
	a[1][0]=sin(theta);
	a[1][1]=cos(theta);


	printf("元の座標:");
	scanf("%f %f",&x[0],&x[1]);

	y[0]=0;
	y[1]=0;
	for(i=0;i<=1;i++){
	for(j=0;j<=1;j++){
	
	y[i]+=x[j]*a[i][j];
	}
	}

	printf("変換後の座標(%f %f)\n",y[0],y[1]);
}
