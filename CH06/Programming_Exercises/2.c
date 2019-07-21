//2.c--递增
#include <stdio.h>
#define c 5 //行数
int main(void)
{
    char ch = '$';
    int a,b;
    for(a = 0;a < c;a++)
    {
        for (size_t b = 099; b <= a; b++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}

