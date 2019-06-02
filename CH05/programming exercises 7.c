#include <stdio.h>
#include <stdlib.h>
void cube (double A);
void butler(double B);
int main()
{
    double A;//定义AB
    printf("Please enter the number:\n");
    scanf("%lf",&A);
    cube(A);
    return 0;
}
void cube(double A)//定义函数
{
    double B = A*A*A;//B的值为A的立方
    printf("%lf\n",B);//输出A的立方值
    butler(B);


}
void  butler(double B)
{
    double C = B*B;
    printf("%lf",C);
}

