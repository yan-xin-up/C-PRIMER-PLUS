#include <stdio.h>
#include <stdlib.h>
#define LITER_PER_GALLON (3.785)
#define KM_PER_MILES (1.609)
int main()
{
    float miles;
    float gallon;
    float mile_per_gallon;
    float liter_per_hunderd_km;

    printf("please enter your drive distance in mile: \n");
    scanf("%f",&miles);
    printf("please enter your gas used in gallon: \n");
    scanf("%f",&gallon);
    mile_per_gallon=miles/gallon;
    liter_per_hunderd_km=(gallon*LITER_PER_GALLON)/(miles*KM_PER_MILES)*100;
    printf("miles per gallon:%.1f,liter per 100 kilometer:%.1f",mile_per_gallon,liter_per_hunderd_km);

    return 0;

    getchar();
}



