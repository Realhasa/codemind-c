#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int ave=sum/n;

    int count=0;
    for(int i=0;i<n;i++){
      if(ave>=arr[i]){
          count=count+1;
      }  
    }
    printf("%d",count);
}