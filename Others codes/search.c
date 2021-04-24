#include<stdio.h>
main()
{
    int i,n;
    int a[100];
    scanf("%d",&n);
    scanf("%d",&a[0]);
    for(i=1;i<n;i++)
        {scanf("%d",&a[i]);
    if(a[i]<a[0])
        a[0]=a[i];
    printf("%d",a[0]);}
    return 0;
}
