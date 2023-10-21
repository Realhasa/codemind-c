#include<stdio.h>
#include<math.h>
int main(){
int h,l;
float hyp;
scanf("%d%d",&h,&l);
hyp=sqrt(pow(h,2)+pow(l,2));
printf("%.2f",hyp);
}