#include<stdio.h>

typedef struct data{
  char Family[30];
  char Given[30];
  long Number;
  }MEMBER;

void printlist(MEMBER data[]){
 int n;
 for(n=0; n<5; n++){
  printf("%-15s %-15s %-15ld\n",data[n].Family, data[n].Given, data[n].Number);
  }
                              }
  
  
int main(){

 
MEMBER data[5]={{"YOSHIWARA" , "MAYUKO" ,138372563},
                 {"HOSHINO" , "RIKO" , 1033268164},
                 {"TOKUTA" , "YOUSUKE" , 10399954282},
                 {"ICHIKI" , "SHUNNJI" , 1331104675},
                 {"OOTAKI" , "HIKARI" , 1525827198}};              
 
printf("Family name     Given name      Number\n");
printf("-----------------------------------------------------------------------------\n");

printlist(data);
  
  return 0;
  
}
