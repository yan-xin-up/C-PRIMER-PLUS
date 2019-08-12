//5.c==金字塔
#include <stdio.h>
int main(void)
{
    char ch; //输入字母
    int num;
    int i, j, k, l;
    printf("please enter a letter:\n");
    scanf("%c", &ch);

    num = ch - 'A';
    for (i = 0; i < num+1; i++)
    {
        for (j = i; j < num; j++)
            printf(" ");
        for (k = 0; k <i+1; k++)
            printf("%c", 'A'+k);
        for (l = i; l>0; l--)
            printf("%c", 'A'+l-1);

        printf("\n");
    }

    return 0;
}
