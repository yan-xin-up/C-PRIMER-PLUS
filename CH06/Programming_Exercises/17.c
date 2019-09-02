//17.c--取钱
#include <stdio.h>
int main()
{
    double ch = 100;
    int i = 0;
    do{
        i++;
        ch += ch*0.08;
        ch = ch-10;
    }while(ch>0);
    printf("you need %d",i);
    return 0;
}

