#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int even=2;
    for(int i=n;i>=1 && i<=n;i--){
        printf("%d ",even*i);
    }
}