#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(void){
  int i,n=0,j,tmp,a;
  int str[10000];
  FILE *fp;	

	if ((fp = fopen("a.txt", "r")) == NULL) {
	
		exit;
	}

while (fscanf (fp,"%d",&a)==1)	{
		str[n]=a;
		n++;
		                    }

	fclose(fp);	

for(i =1;i<n;i++){
for(j = n-1; j >=i; j--){

    if(str[j-1] >str[j]){
    tmp = str[j-1];
    str[j-1] = str[j];
    str[j] = tmp;
                      }

                        }
                        }
                        
for(i = 0; i < n-1; i++){
printf("%d\n",str[i]);
            }
            
      }
  
