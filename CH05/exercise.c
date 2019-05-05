/*
1、变量类型为int，各项变量的值

a. x=(2+3)*6;x=36
b. x=(12+6)/2*3;x=27
c. y=x=(2+3)/4;x=1,y=1
d. y=3+2*(x=7/2);y=10


2、变量类型为int，各项变量的值

a. x=3+3.3=6
b. x=52.5=52
c. x=0*22.0=0
b. x=13.2=13

3、各表达式求值
a. 37.5
b. 1.5
c. 35
d. 37
e. 37.5
f. 35.0
*/
//5.14 找出下列程序中的错误
#include<stdio.h>//缺少头文件

int main (void)
{
    int i = 1;//末尾以分号结尾
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    while(i++<30)//i加++否则题目中i一直为1求值会无限循环
    {               //应加入花括号不能形成代码块否则while循环只包含 n=1.0/i
        n=1.0/i;//如除法运算符两侧均为整数，i的值越大值会趋零截断，将1换成1.0可保证求值不为零
        printf("%f\n",n);//格式化字符串应加入\n否则会打印在1行
    }
printf("That's all,folk!\n");
return 0;//应为return 0
}
