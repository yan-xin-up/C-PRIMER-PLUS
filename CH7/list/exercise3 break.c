//exercise3 嵌套break用法
#include <stdio.h>
int main (void)
{
 int p,q;

 while(scanf("%d",&p) > 0)
 {
        printf("%d\n",p);
        while(scanf("%d",&q) > 0)
        {
            printf("%d.\n",p*q);
            if(q > 100)
            break;              //此处跳出内层循环

        }

        if(q > 100)
            break;              //此处跳出外层循环

    }
    return 0;
}
