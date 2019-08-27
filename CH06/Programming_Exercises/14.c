//14.c--和
#include <stdio.h>
int main(void)
{
    double ch1 [8];//数组1
    double ch2 [8];//数组2
    int i;
    for(i = 0;i < 8;i++)
    {
        printf("请输入第%d个浮点数。\n", i);
        scanf("%lf", &ch1[i]);//%lf 双精度浮点型
        ch2[i] = ch1[i]+ch2[i-1];
    }
    for(i=0;i<8;i++)
        printf("%lf", ch1[i]);
    printf("\n");
    for(i=0;i<8;i++)
        printf("%lf", ch2[i]);
    return 0;
}