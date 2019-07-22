//4.c==行递增，列递增
#include <stdio.h>
#define c 6 //行
int main(void)
{
    char ch = 'A';
    int a,b;
    for(a = 0;a < c;a++)
    {
        for(size_t b = 0;b <= a;b++)
        {
            printf("%c",(ch++));
        }
        printf("\n");

    }
    return 0;
}

