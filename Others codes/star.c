#include<stdio.h>
main()
{
    int i,j,n,l;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(l=n-i; l>0; l--)
            printf(" ");
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
