#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i, a,b,c,d;
	printf("生成する個数\n");
	scanf("%d", &b);
	printf("値の範囲\n");
	printf("以上\n");
	scanf("%d", &c);
	printf("未満\n");
	scanf("%d", &d);
	srand((unsigned) time(NULL));
	
	FILE*fp;
	fp=fopen("b.txt","w");
	for(i=0; i<b-1; i++){
	a=(int)((rand()/((double)RAND_MAX+1.0))*(d-c));
	fprintf(fp, "%d\n", a);
	}
	return 0;
}
