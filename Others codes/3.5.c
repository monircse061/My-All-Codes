#include<stdio.h>
main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {scanf("%d",&a[i]);}
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            {printf("%d",a[j]);}
         printf("\n");
    }
    return 0;
}
