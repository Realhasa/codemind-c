#include<stdio.h>
int main(){
    int n,m;
    
    scanf("%d%d",&n,&m);
    int sum=n+m;
    printf("Sum:%d
",sum);
    int diff=n-m;printf("Difference:%d
",diff);
    int pro=n*m;printf("Product:%d
",pro);
    printf("Quotient:%d
",n/m);
    printf("Remainder:%d",n%m);
}