#include<stdio.h>
main()
{
    int i,j,n,x;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        x=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                x=0;
        }
        if(x==1)
            printf("%d\t",i);
    }
    return 0;
}
