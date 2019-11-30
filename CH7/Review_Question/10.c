//10.c=== Rewrite the program in Review Question 9,can't use goto and continue
#include <stdio.h>
int main(void)
{
    char  ch;

    while((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case 'q':
                printf("Step 1 \n");
                printf("Step 2 \n");
                printf("Step 3 \n");
                break;
            case 'c':
                printf("Step 1\n");
                break;
            case'h':
                printf("Step 1\n");
                printf("Step 3\n");
                break;
            case'b':
                printf("Step 1\n");
                printf("Done!\n");
        }

    }
    return 0;
}