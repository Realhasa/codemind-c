#include<stdio.h>
int main()
{
    int eng,math,phy,che,com;
    scanf("%d%d%d%d%d",&eng,&math,&phy,&che,&com);
    if(eng>34 && math>34 && phy>34 && che>34 && com>34){
        printf("PASSED");
    }
    else{
        printf("FAILED");
    }
}