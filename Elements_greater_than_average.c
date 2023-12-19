#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int ave = sum/n;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=ave){
            c=c+1;
        }
    }
    printf("%d",c);
    
}