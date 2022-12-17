#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void get_dice_face(void){
  static int one,two,three,four,five,six;
  static int call_count=0;
  int face;
  call_count++;
  face=rand()%6;
  if (face == 0) one++;
  else if (face == 1) two++;
  else if (face == 2) three++;
  else if (face == 3) four++;
  else if (face == 4) five++;
  else six++;

  if(call_count==100)
    printf(" 1->%d\n 2->%d\n 3->%d\n 4->%d\n 5->%d\n 6->%d\n", one, two, three,four, five, six);
  
}
int _____main(void){
  int i;
  srand(time(NULL));
  for (i = 0; i<100; i++)
    get_dice_face();
  return 0;
}
