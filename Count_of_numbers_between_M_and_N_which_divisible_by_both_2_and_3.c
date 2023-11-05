#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int count=0;
    while(m<=n){
        if(m%2==0 && m%3==0){
            count=count+1;
        }
        m++;
    }
    printf("%d",count);
}