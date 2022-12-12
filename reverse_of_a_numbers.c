#include<stdio.h>
int reverse(int n);
int main()
{
	
	int n;
	
	scanf("%d",&n);
		int r,s=0;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
		s==n;
	}	
	printf("%d",s);
}