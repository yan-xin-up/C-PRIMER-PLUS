#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    double d1=1.0/3.0;
    float f1=1.0/3.0;
    printf("%.6f,%.6f\n",d1,f1);
    printf("%.12f,%.12f\n",d1,f1);
    printf("%.16f,%.16f\n",d1,f1);
    printf("%d,%d\n",FLT_DIG,DBL_DIG);
    return 0;
}
