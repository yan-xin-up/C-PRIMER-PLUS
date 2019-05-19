#include <stdio.h>
#include <stdlib.h>
#define M_PER_H 60

int main(void)
{
    int min=0;
    int hour,left;
    printf("Enter your number of minutes: \n");
    scanf("%d",&min);//¶ÁÈ¡·ÖÖÓÊý
    while(min>0)
    {
        left = min%M_PER_H;
        hour = min/M_PER_H;
        printf("%d hours and %d minutes.\n",hour,left);
        printf("Enter the next number (<=0 to quite).\n");
        scanf("%d",&min);
    }
    printf("DONE!\n");

    return 0;
}
