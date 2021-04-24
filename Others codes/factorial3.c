#include<stdio.h>
main()
{
    int i,T,n,fact;
    scanf("%d",&T);
    while(T--)
    {scanf("%d",&n);
    fact=1;
    for(i=2;i<=n;i++)
    {fact=fact*i;}
    printf("%d\n",fact);}
    return 0;
}
