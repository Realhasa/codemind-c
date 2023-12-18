#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum_odd=0,sum_even=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum_even=sum_even+arr[i];
        }
        else{
            sum_odd=sum_odd+arr[i];
        }
    }
    printf("%d",abs( sum_odd- sum_even));
}