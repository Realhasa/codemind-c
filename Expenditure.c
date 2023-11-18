#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int total_cost=30*y;
    if(x>=total_cost){   //x o y nia sotorko thakta hobe
        printf("YES");
    }
    else{
        printf("NO");
    }
}