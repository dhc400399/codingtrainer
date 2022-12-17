#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int t_rand(){
  return rand()%3;
}

int ___main(void){
  int i;
  srand(time(NULL));
  for(i=0;i<10;i++)
    printf("%d ",t_rand());
  printf("\n");
  return 0;
}