#include<stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main(void){
  int i;
  char str[100];
 FILE *fp;	

	if ((fp = fopen("a.txt", "r")) == NULL) {
		exit;
	}
	while (fgets(str, 100, fp) != NULL) {

	}
	fclose(fp);	
 
   printf("%d\n",strlen(str)-1);
 
	return 0;
}

