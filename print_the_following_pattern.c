#include<stdio.h>
int main()
{
    int n,i,j;
    char c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",65+n-i);
        }
        printf("
");
    }
}