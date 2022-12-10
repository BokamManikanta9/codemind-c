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

    int d=0,res;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            d=d+a[i];
        }
    }
    printf("%d",d);
}