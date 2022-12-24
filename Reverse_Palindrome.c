#include<stdio.h>
//int main()
int pal(int n)
{
	int q,s=0,r;
	q=n;
	while(q!=0)
	{
		r=q%10;
		s=s*10+r;
		q=q/10;
	}
	return s;

}
int main()
{
	int n;
	scanf("%d",&n);
	n=n+pal(n);
	while(n!=pal(n))
	{
		n=n+pal(n);
	}
	printf("%d",n);
}