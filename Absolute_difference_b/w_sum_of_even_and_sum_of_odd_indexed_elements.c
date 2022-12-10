#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=0,o=0,r;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
        else if(i%2!=0)
        {
            o=o+a[i];
        }
    }
    r=abs(s-o);
    printf("%d",r);
}