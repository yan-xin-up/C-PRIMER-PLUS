#include <stdio.h>
#include <stdlib.h>
#define ADJUST 7.31 //此为字符常量 为校准值
int main()
{
    const double SCALE=0.333;//const限定scale值 尺码向英寸转换
    double shoe,foot;
    printf("shoe size (men's) foot length.\n");
    shoe=3.0;
    while (shoe<18.5)//这里while 循环开始
    {                //这里块开始
        foot=SCALE*shoe+ADJUST;
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe=shoe+1.0;
    }               //块在这里结束
    printf("if the shoes fits,wear it.\n");

    return 0;
}
