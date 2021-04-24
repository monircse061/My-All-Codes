#include<stdio.h>
main()
{
    long long int a,b,c,d,T,n,i;
     while(scanf("%lld%lld",&a,&b)!=EOF)
    {while(a<b)
        {d=a;a=b;b=d;}
    c=a-b;
    printf("%lld\n",c);}
    return 0;
}
