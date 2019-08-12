//8.c--差减积
#include<stdio.h>
int main(void)
{
    double a,b;
    double result;
    printf("please enter two words\n");

    while(scanf("%lf %lf",&a,&b) == 2)
    {
        double sub = a - b;
        double pro = a * b;
        result = sub / pro;
        printf("%lf",result);
        printf("\n");
    }

    return 0;
}