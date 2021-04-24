#include<stdio.h>
main()
{
    int i,j,m,n,k,t,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
          {for(l=n-i;l>0;l--)
        printf(" ");
          for(k=1; k<i; k++)
            {
                printf("%d",k);
            }

            m=i;
            printf("%d",m++);
            for(j=1; j<=1; j++)
                m=m-2;
            for(j=1; j<i; j++)
                printf("%d",m--);

            printf("\n");
        }
    }
    return 0;
}
