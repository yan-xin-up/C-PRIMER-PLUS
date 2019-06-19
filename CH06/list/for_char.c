//for_char.c --可以用字符代替数字
#include <stdio.h>
int main(void)
{
    char ch;
    for (ch = 'a';ch<='z';ch++)
        printf("the ASCii value for %c is %d\n",ch,ch);

    return 0;
}
