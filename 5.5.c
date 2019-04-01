#include <stdio.h>
#include <stdlib.h>
#define SQUARES 64 //定义棋盘中方格数为64

int main()
{
    const double CROP=2E16;//世界小麦年产谷粒数
    double current,total;
    int count=1;
    printf("square      grains      total      ");
    printf("fraction of\n");
    printf("            added       grains     ");
    printf("world total\n");
    total=current=1.0; //从一颗谷粒开始
    printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);

    while(count<SQUARES)
    {
        count=count+1;
        current=current*2.0;//下一个放个谷粒数翻倍；
        total=current+total;//更新总数
        printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
    }

    printf("That's all.\n");
    return 0;
}
