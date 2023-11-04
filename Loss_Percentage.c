#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
   float loss=cp-sp;//why loss take as a float;becase it always integer
    float loss_per;
    loss_per=(loss/cp)*100.00;
    printf("%.2f",loss_per);
}