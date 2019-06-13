//boolean.c--使用布尔类型变量
#include <stdio.h>
int main() {
    long num;
    long sum = 0L;//sum初始化为0
    _Bool input_is_good;


    printf("please enter a integer to be summed ");
    printf("(q to quite): ");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good)
    {
        sum = sum + num;
        printf("please enter next integer (q to quite): ");
        input_is_good = (scanf("%ld", &num) == 1);

    }
    printf("those integers sum to %ld.\n", sum);

    return 0;
}