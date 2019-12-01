// programming1
#include <stdio.h>
int main(void)
{
    char ch;
    int num = 0;

    while((ch = getchar()) != '#')
    {
        num++;
    }
    printf("you input have %d characters",num);

    return 0;
}