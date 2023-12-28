#include<stdio.h>
int main(){
    char s[22];
    scanf("%[^
]s",s);
    int len=0;
    for(int i=0;s[i]!=NULL;i++){
        
            len=len+1;
        
    }
    printf("%d",len);
}