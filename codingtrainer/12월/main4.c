#include <stdio.h>
#define GET_BIT(n, pos) (((n) >> (pos)) & 0x01)
void print_bits(int value);
int main(void) {
  int n, dir, dist;
  printf("정수값을 입력하시오: ");
  scanf("%d", &n);
  while (1) {
    printf("왼쪽 이동은 0, 오른쪽 이동은 1을 입력하시오(-1은 Quit): ");
    scanf("%d", &dir);
    if (dir == -1)
      break;
    printf("몇 비트 이동시킬 것인지 입력하시오: ");
    scanf("%d", &dist);
    printf("이동 전: ");
    print_bits(n);
    printf("이동 후: ");
    if (dir == 0) {
      n = n << dist;
      print_bits(n);
    } else {
      n = n >> dist;
      print_bits(n);
    }
  }
  return 0;
}
void print_bits(int value) {
  int i;
  for (i = 31; i >= 0; i--)
    if (GET_BIT(value, i) == 1)
      printf("1");
    else
      printf("0");
  printf("\n");
}