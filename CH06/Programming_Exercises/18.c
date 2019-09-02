//18.c--friends
#include <stdio.h>
int main()
{
    int i = 5;
    int w =0;

    do{
        w++;
        i =2*(i-w);
        printf("第 %d 周为 %d\n",w,i);
    }while(i<150);

    return 0;
}
