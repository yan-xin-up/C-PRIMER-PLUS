//animals.c====switch语句用法
#include <stdio.h>
#include <ctype.h>
#include <CoreFoundation/CoreFoundation.h>

int main (void)
{
    char ch;

    printf("give me a letter of the alphabet，and i will give ");
    printf("an animal name \nbeginning with that letter. \n");
    printf("please type in a letter; type # to end my act.\n");
    while((ch = getchar()) != '#')
    {
        if('\n' == ch)
            continue;
        if (islower(ch))                 //只接受小写字母
            switch(ch)
        {
            case 'a':
                printf("argali, a wild sheep of Asia.\n");
                break;
            case 'b':
                printf("babirusa,a wild pig of malay.\n");
                break;
            case 'c':
                printf("coati,racoonlike mammal.\n");
                break;
            case 'd':
                printf("desman,aquatic,molelike critter.\n");
                break;
            case 'e':
                printf("echidna,the spiny anteater.\n");
                break;
            case 'f':
                printf("fisher,brownish marten.\n");
                break;
            default:
                printf("That's a stumper!\n");
        }    // switch  结束
        else
            printf("I recognize only lowercase letters.\n");
        while(getchar() != '\n')
            continue;                           //处理数入行的剩余部分
         printf("please type another letter or a #.\n");

    }                                           //while 循环结束
    printf("Bye!\n");
    return 0;
}