#include<stdio.h>
 main()
{
    int i,n,sum=0;
    for(i=1;i<=100;i++)
        {scanf("%d",&n);
    if(n<0)
        break;
    sum=sum+n;}
    printf("%d\t%d",sum,sum/(i-1));
}
