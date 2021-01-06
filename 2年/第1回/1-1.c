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
 
  for(i=0;i<=strlen(str);i++){
    
    if(str[i]>=97&&str[i]<=122)
      str[i]=str[i]-32;
  }
 
 FILE *file;
	file = fopen("b.txt","w");
	fprintf(file,"%s\n", str);
	fclose(file);
	return 0;
}

