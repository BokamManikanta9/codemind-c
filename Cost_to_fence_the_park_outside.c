#include<stdio.h>
int main()
{
    int l,b,w,cs,tc;
    scanf("%d%d%d%d",&l,&b,&w,&cs);
    tc=cs*((l+2*w)*(b+2*w)-(l*b));
    printf("%d",tc);
}