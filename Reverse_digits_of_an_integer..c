#include<stdio.h>
int main()
{
    int i,n,mod,rev,f,g,t,d,h;//i can take many variables as my wish
    scanf("%d",&n);
    while(n!=0){
        mod=n%10;
        printf("%d",mod);
        n=n/10;
    }
}