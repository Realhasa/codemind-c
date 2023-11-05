#include<stdio.h>
int main()
{
    int x,y,total_min;
    scanf("%d%d",&x,&y);
    total_min=(x*y)/(x+y);
    printf("%d",total_min);
}