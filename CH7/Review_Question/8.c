//8,c==output,retire.c
#include <stdio.h>
int main(void)
{
    int age = 20;

    while(age++ <= 65)
    {
        if(age % 20 == 0)  //is age divisiable by 20 ?
            printf("You are %d .Here is raise.\n",age);
        if(age = 65)                                //此处应为"=="否则程序会始终输出本语句答案
            printf("You are %d,Here your gold watch.\n",age);
    }

    return 0;
}