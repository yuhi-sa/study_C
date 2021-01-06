#include<stdio.h>
main()
{
	
	int x, y;
	int a[4][4]= {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 },
			};

	printf("行列A\n");
	
	for(y=0;y<=3;y++){

		for(x=0;x<=3;x++){
			printf("%3d",a[y][x]);
		}
		printf("\n");

	}


	printf("行列Aの転置\n");

	for(y=0;y<=3;y++){

		for(x=0;x<=3;x++){
			printf("%3d",a[x][y]);
		}
		printf("\n");

	}
}

