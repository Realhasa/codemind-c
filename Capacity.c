
#include<stdio.h>
int main()
{
int t,s,b, capacity;
scanf("%d%d%d",&t,&s,&b);
capacity=2*t*s*b*512;
int capacity_kb=capacity/1024;//1kb=1024 bytes;
printf("%d KB", capacity_kb);
}