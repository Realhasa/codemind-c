#include<stdio.h>
int main()
{
    int speed;
    float new_speed;
    scanf("%d",&speed);
    new_speed=(speed*1000.00)/3600.00;
    printf("%.2f",new_speed);
}