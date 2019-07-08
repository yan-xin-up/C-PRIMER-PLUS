//6.c---6.c使用嵌套循环
#include <stdio.h>
int main(void)
{
    int i,j;
    char a= '$';

    for(i=0;i<4;i++)
    {
        for(j = 1;j<=8;j++)
            printf("%c",a);
        printf("\n");

    }

    return 0;
}