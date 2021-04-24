#include<stdio.h>
main()
{
    int i,n,fact;
    while(scanf("%d",&n)!=EOF)
    {fact=1;
    for(i=2;i<=n;i++)
    {fact=fact*i;}
    printf("%d\n",fact);}
    return 0;
}
