#include <stdio.h>
#include <stdlib.h>
#define F_PER_C 30.48
#define I_PER_C 2.54
int main()
{
    float cm,inch;
    int feet;
    printf("Enter a height in centimeters:");
    scanf("%f",&cm);
    while(cm>0)
    {
        feet = (int)cm / F_PER_C;
        inch = (cm-feet*F_PER_C)/I_PER_C;
        printf("%.1f cm=%.1d feet,%.1f inches.\n",cm,feet,inch);
        printf("enter a height in centimeters (<=0 to quite):");
        scanf("%f",&cm);
    }
    printf("bye!\n");

    return 0;
}
