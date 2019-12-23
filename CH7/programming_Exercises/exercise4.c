//exercise4.c if else
#include <stdio.h>
int main (void)
{
    char ch;
    int i=1;
    int j=1;
    printf("please enter something (\"#\" to quit)\n");
    while((ch = getchar()) != '#') {
        if (ch == '.') {
            putchar('!');
            i++;
        } else if (ch == '!') {
            putchar('!');
            putchar('!');
            j++;
        }
        else{
            putchar(ch);
        }

    }
    printf("%d replace times",i+j);
    return 0;
}
