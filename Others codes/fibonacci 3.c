#include<stdio.h>
main()
{
    int i,n,a,b,c,T;
    a=0;b=1;
    scanf("%d",&T);
    while(T--)
    {scanf("%d",&n);
    for(i=0;i<n;i++)
    {if(i<=1)
    c=i;
    else
    {c=a+b;
    a=b;
    b=c;}
    printf("%d  ",c);}}
    return 0;

}
