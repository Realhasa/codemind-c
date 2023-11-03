#include<stdio.h>
int main()
{
    int n,i,facto=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        facto=facto*i;
    }
    printf("%d",facto);
    
}