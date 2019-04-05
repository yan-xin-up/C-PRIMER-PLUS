//talkback.c 先导程序4.1演示与用户交互
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//这里提供strlen()函数原型
#define DENSITY 62.4//定义人体的密度为磅\立方英尺

int main()
{
    float weight,volume;
    int letters,size;
    char name [40];//此行中告诉程序，name是一个可以容个字符的数组

    printf("Hi!What's your full name?\n");
    scanf("%s",&name);
    printf("%s,What's your weight in pounds?\n",name);
    scanf("%f",&weight);
    size=sizeof name;
    letters=strlen(name);
    volume=weight/DENSITY;
    printf("well,%s,your volume is %2.2fcubic feet.\n",name,volume);
    printf("Also,your full name has %d letters.\n",letters);
    printf("and we have %d bytes to store it.\n",size);

    return 0;
}
