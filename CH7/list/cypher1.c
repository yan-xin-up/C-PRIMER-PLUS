//cypher1.c--密码一号。更改输入，空格无变化
#include <stdio.h>
#define SPACE ' '     //SPACE表示单引号-空格-单引号
int main(void)
{
    char ch;
    ch = getchar();             //读取一个字符
    while(ch != '\n')           //当一行未结束时
    {
        if(ch == SPACE)         //留下空格
            putchar(ch);        //此字符不发生变化
        else
            putchar(ch+1);      //改变为其他字符
         ch = getchar();        //获取下一个字符
    }
    putchar(ch);                //打印换行符

    return 0;
}
