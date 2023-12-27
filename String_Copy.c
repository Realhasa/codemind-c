#include<stdio.h>//using with out header file
int main()
{

    char sr1[20],sr2[33];
    scanf("%[^
]s",sr1);
    
    int len=0;
    for(int i=0;sr1[i]!=NULL;i++){
     sr2[i]=sr1[i];
     len=len+1;
    }
    sr2[len]=NULL;
    printf("%s",sr2);
}
