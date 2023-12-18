#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int z;
    scanf("%d",&z);
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==z){
            c=c+1;
        }
    }
    printf("%d",c);
}