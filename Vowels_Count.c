#include<stdio.h>
int main()
{
    char s[333];
    scanf("%[^
]s",s);
    int count=0;
    for(int i=0;s[i]!=NULL;i++){
        switch (s[i]){
             case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }
    printf("%d",count);
}