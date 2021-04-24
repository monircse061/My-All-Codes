#include<stdio.h>
main()
{
    int i,T,n,j;
scanf("%d",&T) ;
    while(T--)
      {
    for(j=1;j<=T;j++)
    {scanf("%d",&n);
   printf("case no:%d\n",j);
     for(i=1;i<=n;i++)
        {if(n%i==0)

        {printf("%d\n",i);}}}}
        return 0;
}
