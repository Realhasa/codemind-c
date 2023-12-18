#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
           flag=1;
           break;
        }
    }
    if(flag==1){
        printf("True");
    }
    else{
        printf("False");
    }
   
}