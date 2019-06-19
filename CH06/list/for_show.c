//for_show.c ==第一个表达式不一定是给变量赋初值，也可使用printf()
#include <stdio.h>

int main()
{
    int num = 0;
    for(printf("keep entering numbers!\n");num!=6;)//此处省略写法时 分号不要省略
        scanf("%d",&num);
    printf("that's the one i want!\n");

    return 0;


}
