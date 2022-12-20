#include<stdio.h>
int main()
{
    int n,l,u,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int j,r,c=0;
        scanf("%d%d",&l,&u);
        for(j=l;j<=u;j++)
        {
            r=j%10;
            if(r==2||r==3||r==9)
            {
                c++;
        
            }
        }
        printf("%d
",c);
    }
}