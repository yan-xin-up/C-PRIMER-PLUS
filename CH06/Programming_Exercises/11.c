//11.c--倒叙打印8个数字
#include <stdio.h>
#define SIZE 8
int main(void)
{
    int num[SIZE];
    int i=0;

    for(i = 0;i < SIZE;i++)
        scanf("%d",&num[i]);
    printf("the number was your input is: \n");

    for( i = SIZE-1;i > 0;i--)
        printf("%d",num[i]);

    printf("\n");

    return 0;
}
