#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    int squ_n=n*n;
    int r,rev=0;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
   int  rev_squ=rev*rev;
    int k,rev_squ_rev=0;
    while(rev_squ!=0){
        k=rev_squ%10;
        rev_squ_rev=rev_squ_rev*10+k;
        rev_squ=rev_squ/10;
    }
    if(squ_n==rev_squ_rev){
        printf("True");
    }
    else{
        printf("False");
    }
}