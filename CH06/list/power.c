//power.c--计算数的整数幂
#include <stdio.h>
double power(double n,int p);  //ansi 原型
int main(void)
{
    double x,xpow;
    int exp;

    printf("please enter a number and the positive integer power");
    printf("to which\nthe number will be raised,enter q");
    printf("to quite.\n");

    while (scanf("%lf%d",&x,&exp)==2)
    {
        xpow=power(x,exp);      //函数调用
        printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf("please the next pair of number or q to quite.\n");
    }
    printf("Hope you enjoy the show,bye.\n");

    return 0;
}

double power(double n,int p ) //函数定义
{
    double pow = 1;
    int i;
    for(i=1;i<=p;i++)
        pow *=n;
    return pow;
}
