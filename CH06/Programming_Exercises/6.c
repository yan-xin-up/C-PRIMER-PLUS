//6.c --- 制表
#include <stdio.h>
int main(void)
{
    int lower,upper;//最大最小
    int index;//赋值
    printf("please enter the lower number:\n");
    scanf("%d",&lower);
    printf("please enter the upper number:\n");
    scanf("%d",&upper);

    printf("%5s %10s %15s\n","number","square","cube");

    for(index =lower;index<upper;index++)
    {
        printf("%5d %10d %15d",index,index*index,index*index*index);
        printf("\n");
    }

    return 0;

}

