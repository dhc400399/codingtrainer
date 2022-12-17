#include <stdio.h>
#define SIZE 10
#define INIT_ARRAY(array, size, value){int i;for(i=0;i<size;i++)array[i]=(value);}

int __main(void){
  int a[SIZE];
  int value;

  printf("배열을 초기화할 정수를 입력하시오: ");
  scanf("%d", &value);
  INIT_ARRAY(a, SIZE, value);
  printf("초기화된 배열 a = [");
  for(int i=0;i<SIZE-1;i++)
    printf("%d, ",a[i]);
  printf("%d",a[SIZE-1]);
  printf("]\n");
  return 0;
  
}