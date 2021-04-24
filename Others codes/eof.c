#include<stdio.h>
main()
{
    int a,sum,n,i,T;
    scanf("%d",&T);

    while(T--)
    {scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {scanf("%d",&a);
    sum=sum+a;}
    printf("%d",sum);}
    return 0;
}
