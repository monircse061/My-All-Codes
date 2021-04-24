#include<stdio.h>
main()
{
    int i,n,t,sum;
    scanf("%d",&t);

    while(t--)
        { scanf("%d",&n);
    sum=0;
      for(i=1;i<=n;i++)
           sum=sum+i;
       printf("%d\n",sum);}
       return 0;
}
