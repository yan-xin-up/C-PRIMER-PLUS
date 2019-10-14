//electric.c-- 计算电费
#include <stdio.h>
#define RATE1 0.13230               //首次使用360kwh的费率
#define RATE2 0.15040               //再次使用108kwh的费率
#define RATE3 0.30025               //接着使用252KWh的费率
#define RATE4 0.34025               //超过720kwh的费率
#define BREAK1 360.0                //费率的第一个分界点
#define BREAK2 468.0                //费率的第二个分界点
#define BREAK3 720.0                //费率的第三个分界点
#define BASE1 (RATE1*BREAK1)         //使用360kwh的费用
#define BASE2 (BASE1+(RATE2*(BREAK2-BREAK1)))               //cost for 468kwh
#define BASE3 (BASE1+BASE2+(RATE3*(BREAK3-BREAK2)))         //cost for 720kwh
int main(void)
{
    double kwh;                     //kilowatt-hours used
    double bill;                    //charges

    printf("Please enter the kwh used.\n");
    scanf("%lf", &kwh);             //%lf for type double
    if(kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if(kwh <= BREAK2)          //KWH between 360 and 468
        bill = BASE1 + (RATE2*(kwh - BREAK1));
    else if(kwh <= BREAK3)          //kwh between 468 and 720
        bill = BASE2 + (RATE3*(kwh - BREAK2));
    else                            //kwh above 720
        bill = BASE3 + (RATE4*(kwh-BREAK3));
    printf("the charge for %.1f kwh is $ %1.2f.\n",kwh,bill);

    return 0;

}
