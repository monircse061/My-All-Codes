#include<stdio.h>
main()
{
    int n,i,sum,a;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {scanf("%d",&a);
   sum=sum+a;}
    printf("%d",sum);
    return 0;
}
