//9.c--返回
#include<stdio.h>
double cal(double a,double b);
int main(void)
{
    double a = 0;
    double b = 0;
    double result;
    printf("please enter two words\n");

    while(scanf("%lf%lf",&a,&b) == 2)
    {
        result = cal(a,b);
        printf("result is %lf",result);
        printf("\n");
    }

    return 0;
}
double cal(double a,double b)
{
    double sub = a - b;
    double pro = a * b;
    double result = sub/pro;

    return  result;
}