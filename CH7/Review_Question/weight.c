//weight.c== 对比身高体重
#include<stdio.h>
int main(void)
{
    int weight,height;

    scanf("%d %d",&weight,&height);                 //此处注意变量的个数，转换说明的个数
    if(weight < 100 && height > 64)
        if(height >= 72)
            printf("You are very tall for your weight.\n");
        else
            printf("You are tall for your weight.\n");
        else if(weight > 300 && height < 48)
            printf("You are quite short for your weight");
    else
        printf("your weight is ideal.\n");

    return 0;
}
