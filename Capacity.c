#include<stdio.h>
int main()
{
    int s,t,b,c,tc;
    scanf("%d%d%d%d",&s,&t,&b,&c);
    c=2*s*t*b*512;
    tc=c/1024;
    printf("%d KB",tc);
}