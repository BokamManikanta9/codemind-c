#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
       m=n-2;											//12312
    for(i=1;i<=n;i++)									//12312
    {													//12312
       													//12312
        for(j=1;j<=m;j++)								//12312
        {
            printf("%d",j);
        }												//121
     													//121
        for(j=m-1;j>=1;j--)								//121
        {
            printf("%d",j);
        }
        printf("
");
    }
}