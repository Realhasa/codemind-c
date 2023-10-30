#include<stdio.h>
int main()
{
    int Radius;
    float pi,Area,Perimeter;
    pi=3.14;
    scanf("%d",&Radius);
   Area=pi*Radius*Radius;
    printf("%.2f",Area);
   Perimeter=2*pi*Radius;
    printf("
%.2f",Perimeter);
}