#include<stdio.h>
int main()
{
    int total_min,hours,mins;
    scanf("%d",&total_min);
    hours=total_min/60;
    mins=total_min%60;
    printf("%d Hour(s) %d Minute(s)",hours,mins);
}