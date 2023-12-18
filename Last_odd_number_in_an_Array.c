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
    int last_odd;
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            last_odd=arr[i];
        }
    }
    printf("%d",last_odd);//garbage value asba jodi kono odd na thaka
}