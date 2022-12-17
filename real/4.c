#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

double f_rand(){
  return (double)rand()/RAND_MAX;
}

int ____main(void){
  int i;
  srand(time(NULL));
  for(i=0;i<5;i++)
    printf("%.2f ",f_rand());
  printf("\n");
  
  return 0;
}