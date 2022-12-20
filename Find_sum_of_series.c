#include<stdio.h>
int main()
{
    int n;
    float s=0;
    scanf("%d",&n);
    for(float i=1;i<=n;i++)
    {
        s=s+(1/i);
    }
    printf("%0.2f",s);
}