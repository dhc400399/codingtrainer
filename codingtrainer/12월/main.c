#include <stdio.h>
#define MAX(x, y) (x) > (y) ? (x) : (y)
#define GET_MAX(x, y, z) (MAX(x, y)) > (z) ? (MAX(x, y)) : (z)
int _main(void) {
  int x, y, z, result;
  scanf("%d %d %d", &x, &y, &z);
  result = GET_MAX(x, y, z);

  printf("정수 (%d, %d, %d) 중 최대값은 %d입니다.\n", x, y, z, result);
  return 0;
}