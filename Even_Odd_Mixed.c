#include<stdio.h>
int main()
{
    int n,m,r,k=0,e=0,o=0,t;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        k++;
        n=n/10;
    }
    while(m>0)
    {
        t=m%10;
        if(t%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        m=m/10;
    }
    if(e==k)
    {
        printf("Even");
    }
    else if(o==k)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}