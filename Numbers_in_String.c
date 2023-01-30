#include<stdio.h>
int main()
{
    char str[100000];
    scanf("%[^
]s",str);
    int i,n=0,a;
    for(i=0;str[i]!=NULL;i++)
    {
        //int a;
        a=str[i];
        if(a>='0' && a<='9')
        {
            n=n+a-48;
        }
    }
    printf("%d",n);
}