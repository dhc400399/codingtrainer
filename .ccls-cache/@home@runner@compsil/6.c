#include<stdio.h>

int mult(int num); 
int _______main(void){
  int n,result;
  printf("정수를 입력");
  scanf("%d",&n);
  
  result=mult(n);
  printf("%d\n",result);

  return 0;
}

int mult(int num){
  if(num==1){
    return 1;
  }
  else{
    return num*mult(num-1);
  }
}