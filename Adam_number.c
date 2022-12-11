#include<stdio.h>
int main()
{
    int n,r=0,s=0,sq,sqr;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    sqr=r*r;
    while(sqr>0)
    {
        s=s*10+sqr%10;
        sqr=sqr/10;
    }
    if(s==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}