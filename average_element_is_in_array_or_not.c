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

    int s=0,k=0,avg;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            k++;
        }
        
    }
    if(k!=0)
    printf("True");
    else
    printf("False");
}