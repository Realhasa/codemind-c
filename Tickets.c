#include<stdio.h>
int main()
{
    int cost,total;
    scanf("%d",&cost);
    total=4*cost;
    if(total<=1000){
        printf("YES");
    }
    else{
        printf("NO");
    }
}