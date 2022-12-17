#include <stdio.h>
#include <string.h>
int main(void)
{
    char ch[20] = "";
    gets_s(ch, sizeof(ch));
    int length = strlen(ch);
    printf("문자열%s의 길이는 %d",ch,length);
    return 0;
}