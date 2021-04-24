#include<stdio.h>
main()
{
    int i,a[100],c,n,j,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                c=0;
                break;
            }
        }
        if(c==0)
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
