//running.c--a useful program for runners
#include <stdio.h>
#include <stdlib.h>
const int S_PER_M=60;/*second in a minute*/
const int S_PER_H=3600;//second in an hour
const double M_PER_K=0.6213;//miles in kilometer
int main(void)

{
    double distk,distm;//distance run in kilometer and miles
    double rate;        //average speed in mph
    int min,sec;        //minutes and seconds of running time
    int time;           //running time in seconds only
    double mtime;       //time in seconds for one mile
    int mmin,msec;      //minutes and seconds for one mile

    printf("the program convers your time for a metric race\n");
    printf("to a time for running a mile and your average\n");
    printf("speed in miles per hour.\n");
    printf("please enter,in kilometers,the distance run.\n");
    scanf("%lf",&distk);            //%lf for type double
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d",&min);
    printf("Now enter the seconds.\n");
    scanf("%d",&sec);
    //converts time to pure seconds
    time = S_PER_M*min+sec;
    //converts kilometers to miles
    distm = M_PER_K*distk;
    //miles per sec ✖ sec per hour=mph
    rate = distm / time * S_PER_H;
    //time/distance=time per mile
    mtime = (double)time / distm;
    mmin = (int)mtime / S_PER_M;    //find whole minutes
    msec = (int)mtime % S_PER_M;    //find remaining seconds
    printf("You ran %1.2f km (%1.2f miles) in %d minutes,%d sec.\n",
           distk,distm,min,sec);
           //pace mean speed
           //corresponds 相当于
    printf("That pace corresponds to running a mile in %d min,",
           mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,
           rate);


    return 0;

}
