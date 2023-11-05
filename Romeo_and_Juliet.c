#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int cost=5*x+10*y;
    int chocolates=cost/z;
    printf("%d",chocolates);
}