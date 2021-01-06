#include<stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main(void){
  int i;
  char str[100];
  int count=0;
  char ch;
 FILE *fp;	

	if ((fp = fopen("a.txt", "r")) == NULL) {
		exit;
	}
	while (fgets(str, 100, fp) != NULL) {

	}
	fclose(fp);	
	
	
	 for(i=0;i<=strlen(str);i++){
   char ss = str[i];
   if(ss=='f'){
   count++;
   }
 
 }
 
   printf("%d\n",count);
 
	return 0;
}
