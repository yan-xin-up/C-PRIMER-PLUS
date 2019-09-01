//16.c--三个循环
#include <stdio.h>

int main()
{
    double da=100;
    double de=100;
    int i = 0;
    while(da >= de)
    {
        da += 100 * 0.1;
        de +=de*0.05;
        i++;
    }
    printf("天数为 = %d",i);

    return 0;

}