#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t;//定义身高，t为英寸
    printf("请以英寸为单位输入您的身高： \n");
    scanf("%f",&t);
    t=t/12;//将英寸换算为英尺
    printf("Dabney,you are %.3f feet tall.\n",t);
    return 0;
}
