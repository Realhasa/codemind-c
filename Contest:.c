#include<stdio.h>
int main()
{
    int x,a,b,total_point;
    scanf("%d%d%d",&x,&a,&b);
    total_point=1*a+2*b;
    if(total_point>=x){
        printf("Qualify");
    }
    else{
        printf("Not Qualify");
    }
}