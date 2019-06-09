//while2.c注意分号位置
#include <stdio.h>
int main()
{
    int n=0;

    while (n++ < 3); //第七行
    printf("n=%d\n",n);
    printf("That's all this program does.\n");
    return 0;

}

