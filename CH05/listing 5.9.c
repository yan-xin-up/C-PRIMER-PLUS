//程序清单5.9求模运算，及While用法
//将秒数转换为几分几秒sec_min
#include <stdio.h>
#include <stdlib.h>
#define SEC_PER_MIN 60//一个钟为60秒

int main()
{
    int sec,min,left;
    printf("Convent seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quite ):\n");
    scanf("%d",&sec);
    while(sec>0)
    {
        min=sec/SEC_PER_MIN;//分钟截断
        left=sec%SEC_PER_MIN;//剩余秒数
        printf("%d seconds is %d minutes,%d seconds.\n",sec,min,left);
        printf("Enter next value (<=0 to quite):\n");
        scanf("%d",&sec);

    }
    printf("DONE!\n");
    return 0;
}
