#include<stdio.h>
int main()
{
    int n,b,k,m;
    scanf("%d%d%d",&n,&k,&m);
    b=(n%(k*m)==0)?(n/(k*m)):(n/(k*m)+1);
    printf("%d",b);
}