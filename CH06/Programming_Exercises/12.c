//12.c==无限序列求和
#include <stdio.h>
int main ()
{
    int count;//次数
    double sum1 = 0,sum2 = 0;//定义变量
    double i;
    int sign;

    printf("please enter a count. \n");
    scanf("%d",&count);

    for(i = 1;i <= count;i++,sign=0-sign)
    {
        sum1 += 1.0/i;
        sum2 += sign * 1.0/i;
    }
    printf("sum2 = %lf",sum2);
    printf("sum1 = %lf",sum1);
    return 0;
}
