//when.c 何时推出程序循环
#include <stdio.h>
int main()
{
    int n = 5;

    while(n < 7)//第七行
    {
        printf("n=%d\n",n);
        n++;
        printf("Now n = %d\n",n);
    }
    printf("The loop has finished.\n");
    return 0;
}

