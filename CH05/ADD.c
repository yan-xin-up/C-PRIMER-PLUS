#include <stdio.h>
#include <stdlib.h>
//随想 从1加到100
//求出1到100的和
int main()
{
    int i,sum=0; //把sum初始定义为0
    for(i=1;i<101;i++)//遍历1到100,把所有和相加保存到sum
    {
        sum+=i;
    }
    printf("%d",sum);//输出sum的值
    return 0;
}
/*
int main()
{
    int i = 100,num = 0;

    while(i)
    {
        num = num + i;
        i--;
    }
    printf("%d\n",num);
    return 0;
}
*/
