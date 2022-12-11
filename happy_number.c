#include<stdio.h>
int main()
{
    int n,s=0,t,r,y=0,k=0;
    scanf("%d",&n);
    while(y<=10)
    {
        while(n>0)
        {
            r=n%10;
            s=s+r*r;
            n=n/10;
        }
        if(s==1 || s==7)
        {
            printf("True");
            k++;
            break;
        }
        y++;
        n=s;
        s=0;
    }
    if(k==0)
    {
        if(s!=1 || s!=7)
        {
            printf("False");
        }
    }
}