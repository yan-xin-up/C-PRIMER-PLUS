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
        if (ch == 'e' && ch_2 == 'i')
        {
                j++;

        }
    }
    printf("e.i %d times",j);

    return 0;

}