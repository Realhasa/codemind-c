#include<stdio.h>
int main()
{
    char s[333];
    scanf("%[^
]s",s);
    int count=0;
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]==97 || s[i]==65 || s[i]==101 || s[i]==69|| s[i]==105|| s[i]==73 || s[i]==111 || s[i]==79 || s[i]==117 ||s[i]==85){
            count=count+1;
        }
    }    
    printf("%d",count);
}