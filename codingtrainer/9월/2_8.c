#include <stdio.h>
int main() {
  int n, i;
  unsigned long long fact = 1;
  printf("정수 입력: ");
  scanf("%d", &n);

  if (n < 0)
    printf("팩토리얼은 0과 음수가 입력될수 없습니다.");
  else {
    for (i = 1; i <= n; ++i) {
      fact *= i;
    }
    printf("%d의 팩토리얼(계승) 값 = %llu\n", n, fact);
  }

  return 0;
}
