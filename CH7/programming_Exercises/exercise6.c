//exercise6--'e'&'i'
#include <stdio.h>
int main(void)
{
    char ch;
    char ch_2;
    int j = 1;
    printf("please enter something (\"#\" to quit).\n");

    while((ch=getchar()) != '#')
    {
        if (ch == 'i' && ch_2 == 'e')
        {
                j++;

        }
        ch_2 = ch;
    }
    printf("e.i %d times",j);

    return 0;

}