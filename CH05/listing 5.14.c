//convert.c 自动类型转换
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char ch;
    float fl;

    fl=i=ch='C';
    printf("char=%c,i=%d,fl=%2.2f\n",ch,i,fl);

    ch=ch+1;
    i=fl+2*ch;
    fl=2.0*ch+i;

    printf("char=%c,i=%d,fl=%2.2f\n",ch,i,fl);

    ch=1107;
    printf("NOW char=%c\n",ch);

    ch=80.89;
    printf("NOW char=%c\n",ch);

    return 0;
}
