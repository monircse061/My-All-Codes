#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d",&a,&b)&&a!=-1&&b!=-1)
    {if(a<b)
        {d=a;
        a=b;
        b=d;}
    c=a-b;
    if(c>50)
    {c=100-c;}
    printf("%d\n",c);}
}
