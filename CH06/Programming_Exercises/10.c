//10.c==上下限平方和
#include<stdio.h>
int main (void)
{
    int lower,upper,product1,product2;
    int index;
    int sum =0;
    printf("enter lower and upper integer limits: \n");
    scanf("%d%d",&lower,&upper);
    product1 =lower*lower;
    product2 = upper*upper;
    while (lower<upper) {
        for (index = lower; index <= upper; index++)

            sum += index * index;

        printf("the sums of the squares from %d to %d is %d.\n", product1, product2, sum);
        printf("Enter next set of limits: ");
        scanf("%d%d.\n", &lower, &upper);
    }

    printf("Done\n");

    return 0;
}

