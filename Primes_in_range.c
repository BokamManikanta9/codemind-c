#include<stdio.h>
#include<math.h>
bool prime(int n)
{
    for(int i=2;i<=sqrt(n)+1;i++)
   {
       if(n%i==0)
       {
           return false;
       }
   }
   return true;
}
int main()
{
    int n,m,i,j,c=0,count;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(prime(i))
        {
            c+=1;
        }
    }
    printf("%d",c);
}