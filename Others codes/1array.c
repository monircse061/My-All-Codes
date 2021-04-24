#include<stdio.h>
main()
{
    int t,a[100],i=0,n,d;
    scanf("%d",&n);
    scanf("%d",&t);
    while(t--)
        {while(i<n)
            scanf("%d",&a[i]);

        if(a[i+1]%2==0)
            d=a[i];
        a[i]=a[i+1];
        a[i+1]=d;
        i++;
        i=0;
        while(i<n)
        printf("%d",a[i]);
        i++;}
        return 0;

}
