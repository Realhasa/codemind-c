#include<stdio.h>
int main()
{
    int n,sum_squ=0,sum_nat=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum_squ=sum_squ+i*i;
        sum_nat=sum_nat+i;
    }
    int sum_nat_squ=sum_nat*sum_nat;
    int diff=sum_nat_squ-sum_squ;
    printf("%d",diff);
}