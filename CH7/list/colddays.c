//list7.1--colddays.c找出0度以下天数占总天数的百分比
#include <stdio.h>
int main()
{
    const int FREEZING = 0;//0度不结冰
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Enter the list of daily low temperature.\n");
    printf("use celsius ,and enter q to quit.\n");
    while(scanf("%f",& temperature)==1)
    {
        all_days++;
        if(temperature < FREEZING)
            cold_days++;
    }
    if(all_days != 0)
        printf("%d days total : %.1f%% were below freezing.\n",all_days,100*cold_days/all_days);
    if(all_days == 0)
        printf("no data entered!\n");
    return 0;

}