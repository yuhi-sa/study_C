#include<stdio.h>

main()
{
int N, max, j, i=0, c=0, d=0;
int a[20];
N = 20, max =15;
j=N-max;

  for(i=0; i<20; i++){
    a[i]=0;
    }
    
  for(i=0;i<15;i++){
    a[i]=++c;
    }

  for(i=0;i<max;i++){
    a[j++] = i+1;
    }
  for(i=0;i<N;i++){
    printf("%d, ",a[i]);
    }

   printf("\n");

  return 0;
}
