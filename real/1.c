#include <stdio.h>
int check_alpha(char c){
  if(c>='a' && c<='z')
    return 1;
  else if(c>='A' && c<='Z')
    return 2;
  else
    return 0;
}
int _main(void) {
  char c;
  printf("문자를 입력하시오 : ");
  scanf("%c",&c);
  if(check_alpha(c)==1)
    printf("%c 는 알파벳 소문자입니다.\n",c);
  else if(check_alpha(c)==2)
    printf("%c 는 알파벳 대문자입니다.\n",c);
  else
    printf("%c 는 알파벳 문자가 아닙니다.\n",c);
  return 0;
}

