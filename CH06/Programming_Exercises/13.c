//13.c--pow()
#include <math.h>//使用pow()
#include <stdio.h>
int main()
{
    int ch[8];
    int i;
    for(i=0;i<8;i++)

        ch[i]=pow(2,i);
    i = 0;
    do{
        printf("%d\n",ch[i]);
    }while(++i<8);

    return 0;
}
