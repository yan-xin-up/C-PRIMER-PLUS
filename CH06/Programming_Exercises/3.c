//3.c==行递增，列递减
#include <stdio.h>
#define c 6
int main(void)
{
    char ch = 'F';
    int a,b;
    for(a = 0;a < c;a++)
    {
        for(size_t b=0;b<=a;b++)
        {
            printf("%c",(ch-b));
        }
        printf("\n");

    }
    return 0;
}