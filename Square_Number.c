#include<stdio.h>
#include<math.h>
int fun(int n)
{
	int i,j,s;
	s=sqrt(n);
	for(i=0;i<=s;i++)
	{
		for(j=i+1;j<=s;j++)
		{
			if(i!=j)
			{
				if(n==((i*i)+(j*j)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(fun(n)==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
