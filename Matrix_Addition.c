#include<stdio.h>
int main()//we have to go on the base of codemind construct
{//mana code mind a aga 2 ta input niase tarpor abar 2 ta input 
    int r,c;//ti amader prothoma 2 ta input o pora 2 ta input nita hoba
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int r1,c1;
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            
            printf("%d ",arr[i][j]+a[i][j]);
            
        }
        printf("
");
    }
}