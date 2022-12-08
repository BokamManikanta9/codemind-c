#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int max=a>b?a:b;
    for(int i=max;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}