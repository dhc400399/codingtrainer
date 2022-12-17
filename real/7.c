#include<stdio.h>

int power(int base,int powerRaised);

int main(void){
  int base,powerRaised,result;
  printf("밑수 :");
  scanf("%d",&base);
  printf("지수 :",powerRaised);
  scanf("%d",&powerRaised);
  result=power(base,powerRaised);
  printf("%d",result);
  return 0;
}
int power(int base,int powerRaised){
  if(powerRaised==0)
    return 1;
  else
    return base*power(base,powerRaised-1);
}