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
    int s,k=0;
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            k++;
            break;
        }
        
    }
    if(k!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}