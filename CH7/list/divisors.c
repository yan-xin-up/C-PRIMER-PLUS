//divisors.c--使用嵌套if语句显示一个数的约数
#include <stdio.h>
#include<stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("please enter an integer to analysis: ");
    printf("Enter q to quit.\n");

    while(scanf("%lu",&num) == 1)
    {
        for(div = 2,isPrime = true;(div * div) <= num;div++) //到num平方根即可
        {
            if(num % div == 0)
            {
                if((div*div) != num)
                    printf("%lu is divisable by %lu and %lu.\n",num,div,num/div);
                else
                    printf("%lu is divisalbe by %lu.\n",num,div);
                isPrime = false;//该数非质数
            }

        }

        if(isPrime == 1)
            printf("%lu is prime.\n",num);

        printf("please enter an integer to analysis: ");
        printf("Enter q to quit.\n");
    }
    printf("bye.\n");
    return 0;
}