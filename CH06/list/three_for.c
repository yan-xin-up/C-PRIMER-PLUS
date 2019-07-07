#include <stdio.h>
#include <string.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index,score[SIZE];
    int sum=0;
    float average;
    char buf[256]="";
    printf("Enter %d golf scores:\n",SIZE);
    for(index=0; index<SIZE; index++)
    {
        scanf("%d",&score[index]);
        sprintf(buf+strlen(buf),"%5d",score[index]);
        sum+=score[index];
    }
    average=(float)sum/SIZE;
    printf("The scores read in are as follows: \n");
    printf(buf);
    printf("\n");
    printf("Sum of scores= %d,average= %.2f\n",sum,average);
    printf("That`s a handicap of %.0f.\n",average-PAR);
    return 0;
}

