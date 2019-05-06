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
/*#include<stdio.h>//缺少头文件

int main (void)
{
    int i = 1;//末尾以分号结尾
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    while(i++<30)//i加++否则题目中i一直为1求值会无限循环
    {               //
        n=1.0/i;//如除法运算符两侧均为整数，值会趋零截断，将1换成1.0可保证求值不为零
        printf("%f\n",n);//格式化字符串应加入\n否则会打印在1行
    }
printf("That's all,folk!\n");
return ;
}

*/

#include <stdio.h>
#define S_PER_M 60 //一分钟60s
int main(void)
{
    int sec=1;
    int left,min;
    printf("this program converts seconds to minutes and");
    printf("seconds.\n");
    printf("Just enter the number of seconds.\n");
    printf("enter 0 to end the program.\n");
    scanf("%d",&sec);
    while(sec > 0)
    {


        min = sec / S_PER_M;
        left = sec % S_PER_M;
        printf("%d sec is %d min,%d sec.\n",sec,min,left);
        printf("Next input?\n");
        scanf("%d",&sec);
    }
    printf("bye!\n");
    return 0;
}


