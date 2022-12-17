#include <stdio.h>
void how_equal(double arr[], int n); // function declaration
int main(void) {

  int nPerson;

printf("학생 수를 입력하세요(n < 1000):");
 
scanf("%d",&nPerson); 
//사람 수 
 
double array[nPerson];
 
how_equal(array,nPerson);
 
return 0;
}
void how_equal(double arr[], int n) {

  int i;

  double avg;

  double allsum = 0;

  double each_differ;

  double pos_sum = 0;
  //평균보다 큰 값

  double neg_sum = 0;
  //평균보다 작은 값

  for (i = 0; i < n; i++) {

    scanf("%lf", &arr[i]); //지불한 달러 입력

    allsum += arr[i];
    //지불한 달러의 총금액을 구한다
  }

  printf("----------------\n");

  avg = allsum / n;
  //평균을 구한다

  for (i = 0; i < n; i++) {

    each_differ = arr[i] - avg;
    //각자 지불한 달러에서 평균을 뺀 값

    each_differ = (int)(each_differ * 100);
    // 1센트단위까지 구하므로 소주 셋째 자리 이후는 버린다.

    each_differ = each_differ / 100.00;
    //소수 둘째자리까지 출력한다.

    if (each_differ > 0) {

      pos_sum += each_differ;
      //평균보다 큰 값에서 평균을 뺀경우

    } else {

      neg_sum += -each_differ;
      //평균보다 작은 값에서 평균을 뺀 경우
    }

    if (pos_sum == neg_sum)
      //각 학생이 사용한 금액이 똑같아지기 위해 전달되어야 하는 금액의 총합

      printf("$ %.2lf\n", pos_sum);
  }
}