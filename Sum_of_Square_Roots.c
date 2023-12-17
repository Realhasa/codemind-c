#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        float sum=0;
        while(a<=b){
            sum=sum+sqrt(a);
            a=a+1;
        }
        printf("%.2f",sum);
        
        
    }
    else{
        printf("not valid input");
    }
}