#include<stdio.h>
#define N 5

typedef struct member{
    char fname[30];
    char gname[30];
    long number;
    }MEMBER;
    

void printlist(MEMBER member[]){
  int n;
  for(n=0; n<5; n++){
    printf("%-15s %-15s %-15ld\n" ,member[n].fname,member[n].gname,member[n].number);
    }
    }
    
int main(){
int i,c;
FILE *fp;
fp = fopen("a.txt","r");
MEMBER data[N];

for(i=0; i<N;i++){
  fscanf(fp, "%s %s %ld",&data[i].fname, &data[i].gname, &data[i].number);
  }
  
printf("Family name     Given name      Number\n");
printf("---------------------------------------------------------------------------\n");
printlist(data);
fclose(fp);

return 0;
}
