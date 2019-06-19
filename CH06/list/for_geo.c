//for_geo.c -- 递增几何级数
#include <stdio.h>
int main()
{
    double debt;
    for (debt = 100.0; debt < 150.0; debt = debt *1.1)
        printf("your debt is now $%.2f.\n",debt);

    return 0;
}
