#include <stdio.h>
#include <stdlib.h>
#define D_PER_W 7

int main()
{
    int day,week,left;
    printf("please enter the days: \n");
    scanf("%d",&day);
    while(day>=0)
    {
        week = day/D_PER_W;
        left = left%D_PER_W;
        printf("%d days are %d weeks, %d days.\n",day,week,left);
        printf("please enter the days;(day <0 to quite).\n");
        scanf("%d",&day);
    }
    printf("DONE!\n");
    return 0;
}
