#include<stdio.h>
main()
{
    long long int a,b,k=1,j;
    scanf("%lld%lld",&a,&b);
    for(j=1;j<=b;j++)
    {k=k*a;}
    printf("%lld",k);
    return 0;
}
