//another answer
#include <stdio.h>
int main(void)
{
    int n_space = 0;                     //空格
    int n_enter = 0;                    //换行符
    int n_other = 0;                    //其余字符
    char ch;
    printf("Please enter something: \n");
    printf("enter \"#\" to qiite.\n");

    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
            n_space++;
        else if(ch == '\n')
            n_enter++;
        else
            n_other++;
    }
    printf("You input %d space, %d break; %d other",n_space,n_enter,n_other);
    return 0;
}