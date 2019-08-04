//7.c==倒叙打印
#include <stdio.h>
#include <string.h>
int main(void)
{
    char ch [50];
    int num;

    printf("please enter a word!\n");
    scanf("%s", ch);

    num = strlen(ch);

    for(int i = num-1;i>=0;i--)//字符串最后一位为空字符
        printf("%c",ch[i]);
    printf("\n");

    return 0;
}
