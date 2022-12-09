#include<stdio.h>
#define n 3
int main()
{

    int a[n],c,i,k=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       k=k*a[i];
    }
    c=(2*k*512)/1024;
    printf("%dKB",c);
}