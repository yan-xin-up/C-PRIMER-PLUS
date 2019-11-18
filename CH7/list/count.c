//exercise1 count测试
#include<stdio.h>
int main(void)
{
    char ch;
    int count = 0;

    while(count<10)
    {
        ch = getchar();
        if(ch == '\n')
            continue;
        putchar(ch);
        count++;
    }
}

