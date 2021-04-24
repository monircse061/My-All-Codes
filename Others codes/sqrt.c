#include<stdio.h>
main()
{
    long long int n,x,y;int T;
    scanf("%d",&T);
    while(T--)
        {scanf("%lld",&n);
    x=sqrt(n);
    y=x*x;
    if(y==n)
        printf("YES\n");
    else
        printf("NO\n");}
    return 0;
}
