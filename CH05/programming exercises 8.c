#include <stdio.h>
#include <stdlib.h>
#define S 256

int main()
{
    int F;
    printf("This program computer moduli\n");
    printf("enter an integer to serve as second operand:%d\n",S);
    printf("Enter the first operand:");
    scanf("%d",&F);
    while(F > 0)
    {
        int A = F % S;//ÇóÄ£ÔËËã
        printf("%d %% %d is %d\n",F,S,A);
        printf("enter the next number for first operand (<=0 to quite):");
        scanf("%d",&F);
    }
    printf("DONE!\n");
    return 0;
}
