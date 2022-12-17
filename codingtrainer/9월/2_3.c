#include <stdio.h> //입출력 함수 포함하고 있는 헤더

#define pi 3.14

int main() { //메인

  int radius; //반지름 값을 저장할 변수

  float area; //면적값을 넣을 변수

  printf("반지름을 입력하시오."); //반지름 입력하라는 알림의 출력

  scanf("%d", &radius); //입력 받은 반지름의 값을 radius에 저장

  area = (float)radius * (float)radius *
         pi; //원의 면적 구하는 공식, 정수값 radius를 실수형 float로 형변환

  printf("원의 면적은 : %f", area); //원의 면적을 출력
  return 0;
}