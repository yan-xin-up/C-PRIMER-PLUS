// addemup.c 集中常见的语句
#include <stdio.h>
#include <stdlib.h>

void main()//计算前20个整数之和
{
    int count,sum; //声明
    sum=0; //表达式语句
    count=0; //表达式语句
    while(++count<20)//迭代语句
    sum=sum+count;
    printf("sum=%d\n",sum);//表达式语句2

    return 0;//跳转语句
}
