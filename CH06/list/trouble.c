//trouble.c--误用=导致无限循环
#include <stdio.h>
int main()
{
    long num;
    long sum=0L;//sum初始化为0
    int status;

    printf("please enter a integer to be summed ");
    printf("(q to quite): ");
    status=scanf("%ld",&num);
    while(status=1)
    {
        sum = sum + num;
        printf("please enter next integer (q to quite): ");
        status=scanf("%ld",&num);

    }
    printf("those integers sum to %ld.\n",sum);

    return 0;


}