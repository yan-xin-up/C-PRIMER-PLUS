//wordcnt.c--统计字符数，行数，单词数
#include<stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
    char ch;                //程序读取字符
    unsigned long n_lines = 0;  //行数
    unsigned long n_words = 0;  //单词数
    unsigned long n_chas = 0;   //字符数
    unsigned int p_lines;       //不完整行数
    char pre;                   //先前字符

    bool inword = false;

    while ((ch = getchar()) != STOP)
    {
        n_chas++;               //统计字符数
        if(ch == '\n')
            n_lines++;          //行数统计
        if(!isspace(ch) && !inword)
        {
            inword = true;      //  开始一个新的单词
            n_words++;
        }
        if(isspace(ch) && inword)
            inword = false;

        pre = ch;               //保存先前值

    }

    if(pre != '\n')
        p_lines = 1;

    printf("characters = %lu,lines = %lu,words = %lu.\n",n_chas,n_lines,n_words);
    printf("partial lines = %d",p_lines);


    return 0;

}


