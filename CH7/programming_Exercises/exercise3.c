//ex3===I/O
#include <stdio.h>
int main(void)
{
    int sum_odd = 0 ;
    int sum_even = 0;            //奇数与偶数只和
    int n_odd = 0;               //奇数偶数
    int n_even = 0;
    // float avg1,avg2;          //平均值
    int input = 0;
    while(scanf("%d", &input)){

        if(input == 0)
            break;
        else if((input % 2) == 0)
        {
            n_even++;
            sum_even += input;
        }
        else{
            n_odd++;
            sum_odd += input;
        }

    }
    printf("average %f, %d even words.average %f ,%d odd words",(float)(sum_even/n_even),n_even,(float)(sum_odd/n_odd),n_odd);
    return 0;
}

/*
 * attention
 * 注意变量初始赋值，数据类型的转换,只有返回值可与scanf（）函数比较，实际与输入值比较逻辑关系时分开比较
 *
*/