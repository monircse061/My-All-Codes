#include<stdio.h>
main()
{
    int i,a[100],c,j,k,n;
    while(scanf("%d",&n)&&n!=0)
    {for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                c=a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
        for(k=0; k<n; k++)
            if(i==n-2)
                printf("%d\t",a[k]);}
                printf("\n");
    }

    return 0;
}
