#include<stdio.h>
main()
{
    int i,j,k,n,l,m;
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        for(l=i; l<n; l++)
        {
            printf(" ");
        }
        for(j=i; j>=0; j--)
        {
            printf("%d",j);
        }
        for(k=1; k<=i; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
