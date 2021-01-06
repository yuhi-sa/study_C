#include<stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main(void){
  int i;
  char str[100];
  int count=0;
  int count2=0;
  int max=0;
  char ch;
 FILE *fp;	

	if ((fp = fopen("a.txt", "r")) == NULL) {
		exit;
	}
	
	
	while (fgets(str, 100, fp) != NULL) {
      count2++;

	 for(i=0;i<=strlen(str);i++){
   char ss = str[i];
  
         if(ss==','){
               count++;
                     }
                                }
                      
         if(count >= max){
                max = count;
                         }
                      
            count=0;
             
                                     	}
	
	fclose(fp);	
 
   printf("最大カルム数＝%d\nレコード数＝%d\n",max,count2);
 
	return 0;
}
