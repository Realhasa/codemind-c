#include<stdio.h>
int main()
{
int d, years, weeks;
scanf("%d",&d);
years=d/365;
printf("%d",years);
weeks=(d%365)/7;
printf("
%d",weeks);
}