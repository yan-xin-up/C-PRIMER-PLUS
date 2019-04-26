//定义一个带参数的函数
#include <stdio.h>
#include <stdlib.h>
void pound(int n);//ANSI函数原型声明

int main(void)

{
    int times=5;
    char ch='!';
    float f=6.0f;

    pound(times);
    pound(ch);
    pound(f);
    return 0;
}
void pound(int n)//ANSI函数风格函数头
{                   //表明该函数参数为int类型
    while(n-->0)
        printf("#");
    printf("\n");
}
