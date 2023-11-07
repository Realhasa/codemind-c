#include<stdio.h>
int main()
{
    int t;
    int n,m,k;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d%d",&n,&m,&k);
    
        if(n+k<=m){
        printf("YES
");
        }
        else{
            printf("NO
");
        }
    }
}