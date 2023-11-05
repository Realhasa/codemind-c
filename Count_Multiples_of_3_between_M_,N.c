#include<stdio.h>
int main()
{
    int i,m,n,count=0;
    scanf("%d%d",&m,&n);
    if(m>=1 && m<=10000 && n>=1 && n<10000){
        
        while(m<=n){
            if(m%3==0){
                count = count+1;
                
            }
            m++;
        }
    }
    printf("%d",count);
}