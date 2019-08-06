//8.c--差减积
#include<string.h>
int main(void)
{
    float a,b;
    int status;
    printf("please enter two words\n");

    status = scanf("%f %f", &a,&b);
    while(status == 2)
    {
        printf("%f", (a - b) / a * b);
        printf("\n");
        scanf("%f %f",&a,&b);
    }

    return 0;
}