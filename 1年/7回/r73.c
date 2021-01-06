#include<stdio.h>
main()
{
	int i;
	int j;
	int size =4;
	int square[4][4]={
			{16,3,2,13},
			{5,10,11,8},
			{9,6,7,12},
			{4,15,14,1}
			  };
	int magic =1;
	int total =0;
	int sum1;
	int sum2;
	

sum1 =0; sum2 =0;
for(i=0;i<size;i++){
for(j=0;j<size;j++){
	sum1 += square[i][j];
	sum2 += square[i][(size-1)-i];
}}
if(sum1 == sum2){
	total == sum1;
}else{
	magic = 0;  
}


sum1 = 0; sum2 =0;
for(i=0;i<size;i++){
for(j=0;j<size;j++){
		sum1 += square[i][j];
		sum2 += square[j][i];
}}

if(magic == 1){
	printf("魔法陣です\n");
}else{
	printf("魔法陣ではありません\n");
	}
}
