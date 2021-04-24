#include<stdio.h>
main()
{
    long long int i,n,t,sum;
    scanf("%lld",&t);

    while(t--)
        { scanf("%lld",&n);
    sum=n*(n+1)/2;
       printf("%lld\n",sum);}
       return 0;
}
