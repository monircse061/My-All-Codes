#include<stdio.h>
main()
{
    int n,i,x,y,T,w,sum;
    scanf("%d",&T);
    while(T--)
    {scanf("%d",&n);
    x=n%10;
    for(i=1;i<=5;i++)
    {w=n%10;
     y=n/10;
     n=y;}
     if(y==0)
     sum=x+w;
     printf("sum=%d;\n",sum);}
     return 0;
}
