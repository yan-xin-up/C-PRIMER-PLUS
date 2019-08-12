//5.c==金字塔
#include <stdio.h>
int main(void)
{
    char l; //输入字母

    printf("please enter a letter:\n");
    scanf("%c",&l);

    int le= l- 'A'+1;
    for(size_t i=0;i< le;i++)
    {
        char temp = 'A' - 1;
        for(size_t j=0;j<(le-i-1);j++)
        {
            printf(" ");
        }
            for(size_t k=0;k<=i;k++)
            {
                printf("%c", ++temp);
            }
                for(size_t b=0;b<i;b++)
                {
                    printf("%c",--temp);
                }

        printf("\n");
    }

    return 0;
}

