#include <stdio.h>
#include <stdlib.h>
void Temperature(double F);
int main()
{
    double F;
    printf("please enter the double type number: \n");

    while(scanf("%lf",&F)==1)
    {
        printf("TRUE!\n");
        Temperature(F);
        printf("please enter the temperature (q to quite):\n");

    }
    printf("error!\n");
    return 0;
}
void Temperature(double F)
{
    const double C = 5.0/9.0*(F-32.0);
    const double K = C + 273.16;
    printf("%.2lf F %.2lf C %.2lf K\n",F,C,K);

}
