#include<stdio.h>
int main()
{
    int n,m;scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum_even=0,sum_odd=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           
            if(arr[i][j]%2==0){
                sum_even=sum_even+arr[i][j];
            }
            else{
                sum_odd=sum_odd+arr[i][j];
            }
        }
        
    }
    printf("%d %d",sum_even,sum_odd);
}