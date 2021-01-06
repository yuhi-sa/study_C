#include<stdio.h>

int main()
  FILE *fp;
  char s[256];
  char file_name[] = "a.txt";
  
  fp = fopen(file_name, "r");
  if(fp == NULL){
    printf("File open error\n");
    return 1;
    }
  
  while(fgets(s, 255, fp) != NULL){
   printf("%s", s);
   }
   
   fclose(fp);
   return 0;
   }
