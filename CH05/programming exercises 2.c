#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    n1 = 0;

    printf("please enter your number: \n");
    scanf("%d",&n2);
    while(n1++<=10)
        printf("%d\n",n2++);
    printf("DONE!");
    getchar();
    getchar();
    return 0;
}
