#include <stdio.h>
int main(void) {

  int x, y, z;

  const char a = '-';

  printf("Enter the date :");

  scanf("%d.%d.%d", &x, &y, &z);

  printf("%02d%c%02d%c%d", z, a, y, a, x);

  return 0;
}