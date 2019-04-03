#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    typedef unsigned int size_t;
    size_t intsize;
    intsize=sizeof(int);
    printf("n=%d,n has %u bytes;all ints have %u bytes.\n",n,sizeof n,intsize);

    return 0;
}
