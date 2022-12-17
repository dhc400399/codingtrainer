#include <stdio.h>
#define GET_BIT(n, pos) (((n) >> (pos)) & 0x01)
#define SET_BIT(n, pos) ((n) |= (0x01 << (pos)))
#define CLR_BIT(n, pos) ((n) &= ~(0x01 << (pos)))
int ___main(void) {
  int n = 0x000000D9;
  printf("n = %#010x\n", n);
  printf("GET_BIT(n, 5)의 결과: %d\n", GET_BIT(n, 5));
  SET_BIT(n, 2);
  printf("SET_BIT(n, 2)의 결과: n = %#010x\n", n);
  CLR_BIT(n, 3);
  printf("CLR_BIT(n, 3)의 결과: n = %#010x\n", n);
  printf("%#010x\n",~(0x01<<3));
  return 0;
}