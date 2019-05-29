#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
修改程序5使其计算整数的平方和
*/
//5.6

int main(void)
{
    int day,sum;
    int count_sum=0;
    scanf("%d",&day);
    sum = 0;
    while (sum++ < day)
        count_sum= sum*sum;
    printf("%d",count_sum);
    return 0;
}
