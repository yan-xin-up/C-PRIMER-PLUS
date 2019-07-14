//14.c --- K output
#include <stdio.h>
int main(void)
{
    int k;
    for(k = 1,printf("%d\n",k);printf("k = %d\n",k),k*k<26;k+=2,printf("NOW k is %d.\n",k))
        printf("k is %d in the loop \n",k);
    return 0;
}

