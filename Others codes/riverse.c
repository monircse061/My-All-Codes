#include<stdio.h>
main()
{
    long long int a[10000],i,j,n;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(j=n-1;j>=0;j--)
        printf("%lld ",a[j]);
    return 0;


}
