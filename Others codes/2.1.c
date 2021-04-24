#include<stdio.h>
main()
{
    double sum,i,n;
    scanf("%lf",&n);
    sum=0;
    for(i=1; i<=n; i++)
        sum=sum+1/i;
    printf("%2.5lf",sum);
    return 0;
}
