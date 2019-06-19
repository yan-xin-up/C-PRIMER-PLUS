//for_13s.c--- 可令计数器递增2，10，13等数字
#include <stdio.h>
int main()
{
    int n;//从2 开始每次递增13

    for (n=2;n<60;n=n+13)
        printf("%d\n",n);

    return 0;

}
