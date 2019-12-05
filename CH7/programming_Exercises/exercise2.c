//ex2.==I/O
#include <stdio.h>
int main (void)
{
    char ch;
    int num = 1;
    printf("please enter some character,\n");

    while((ch= getchar()) != '#')
    {
        if(num % 8 == 0)
        {
                printf("\n");
        }
        num++;
        printf("%c,%d",ch,ch);
    }



    return 0;
}
