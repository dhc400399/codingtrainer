#include <stdio.h>

int is_leap(int y){
  return (y%4==0)&&(y%100!=0)&&(y%400==0);
}
int __main(void){
  int year;
  printf("연도를 입력하시오: ");
  scanf("%d",&year);
  if (is_leap(year)==1)
    printf("윤년입니다.");
  else
    printf("윤년이 아닙니다.");
  return 0;
}