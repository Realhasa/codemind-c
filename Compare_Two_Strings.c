#include<stdio.h>//using with out header file
int main()
{

    char sr1[20],sr2[33];
    scanf("%[^
]s",sr1);
    scanf(" %[^
]s",sr2);
    int flag=0;
    for(int i=0;sr1[i]!=NULL;i++){
     if(sr1[i]==sr2[i]){

     }
     else{
        flag=1;
        break;
     }
    }
    if(flag==1){
    printf("Strings are not Equal");
    }
    else{
        printf("Strings are Equal");
    }
}
