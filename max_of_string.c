#include<stdio.h>
int main()
{
    char str[10000];
    scanf("%[^
]s",str);
    int l,i;
    l=str[0];
    for(i=0;str[i]!=0;i++)
    {
        if(str[i+1]>=l)
        {
            l=str[i+1];
        }
    }
    printf("%c",l);
}