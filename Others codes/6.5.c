#include<stdio.h>
main()
{
    int n1=0,n2=1,i,f,n;
    scanf("%d",&n);
    printf("%d\t%d\t",n1,n2);
    for(i=0;i<n-1;i++)
        {f=n1+n2;
        n1=n2;
        n2=f;
        printf("%d\t",n2);}
        return 0;
}
