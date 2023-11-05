#include<stdio.h>
int main()
{
    int i,n,mod,rev=0,f,g,t,d,h;//i can take many variables as my wish
    
    scanf("%d",&n);
    int main_num=n;
    
    while(n!=0){
        mod=n%10;
        rev=(rev*10)+mod;
        n=n/10;
    }
    if(main_num==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}