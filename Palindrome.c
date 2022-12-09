#include<stdio.h>
int main()
{
	
	int n;
	
	scanf("%d",&n);
		int r,s=0,c;
		r=n;
	while(n>0)
	{
		s=s*10+n%10;
		n=n/10;
	
	
}
if(r==s)
{
    printf("True");
}
else
{
    printf("False");
}
}