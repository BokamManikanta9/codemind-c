#include<stdio.h>
int pal(int n)
{
   	int r,s=0,c;
		r=n;
	while(n>0)
	{
		s=s*10+n%10;
		n=n/10;
}
if(r==s)
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
    int n,s=1,x,y;
    scanf("%d",&n);
    int i;
    for(x=n-1;;x--)
    {
        if(pal(x))
        {
            break;
        }
    }
    for(y=n+1;;y++)
    {
        if(pal(y))
        {
            break;
        }
    }
    if(x-n==n-y)
    {
        printf("%d %d",x,y);
    }
    else if(x-n>n-y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}