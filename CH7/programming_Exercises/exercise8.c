//exercise7--about tax
#include<stdio.h>
#define BS 10       //basic salary
#define RATE1   0.15    //小于等于300刀税率
#define RATE2   0.2     //续150刀的税率
#define RATE3   0.25    //余下的税率为0.25
int main (void)
{
      double H;           //works_hour
      double total_income;
      double tax;
      double net_income;
      int choice;       //选择

      printf("**************************************************************************************\n");
          printf("Enter the number corresponding to the desired pay rate or action:\n");
      printf("%-20s %-20s\n%-20s %-20s\n %-20s","1)$8.75/hr","2)");
   printf("please enter you work hours this week.(enter \"#\" to quit)\n");
   while(scanf("%lf",&H) ==1);
    {
        if(H > 40)
        {
            H = 1.5*(H-40)+40;
        }
        total_income = H *BS;
        if(total_income <= 300)
        {
            tax = total_income * RATE1;
            net_income = total_income - tax;

        }
        else if (total_income <= 450)
        {
            tax = 300 * RATE1 +(total_income - 300) * RATE2;
            net_income = total_income - tax;

        }
        else{
            tax = 300 * RATE1 + 150 * RATE2 + (total_income - 450) * RATE3;
            net_income = total_income - tax;

        }

    }
    printf("total income = %lf; net income = %lf; tax = %lf.\n",total_income,net_income,tax);
    return 0;
}
