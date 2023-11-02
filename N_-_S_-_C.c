#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++){
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}