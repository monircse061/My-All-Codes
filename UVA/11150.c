#include<stdio.h>
int main()
{
    int a,b,c,n,x;
    while(scanf("%d",&n)!=EOF)
    {x=n;
    if(n%3!=0)
        n=n+1;
        while(n>1)
            {x=x+n/3;
          n=n/3;}
    printf("%d\n",x);}
    return 0;
}
