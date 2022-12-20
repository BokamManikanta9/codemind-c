#include<stdio.h>
int pal(int n)
{
    int q,r,s=0;
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==n)
    {
       return 1; 
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(pal(i))
        {
            printf("%d ",i);
        }
    }
}