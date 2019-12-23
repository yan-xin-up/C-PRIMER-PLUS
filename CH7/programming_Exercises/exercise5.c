//exercise5.c==use switch
#include<stdio.h>
int main(void)
{
    char ch;
    int i = 1;

    printf("please enter something (\"#\" to quit).\n");
    while((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.':putchar('!');
                     i++;
            case '!':putchar('!');
                     putchar('!');
                     i++;
            default:putchar(ch);
        }

    }
    printf("%d replace times.\n",i);
    return 0;
}