#include<stdio.h>
main()
{
    int loc,i,a[100],n,key,T;
    while(   scanf("%d",&n)!=EOF)  {
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&key);
    for(i=0;i<n;i++)
        {if(a[i]==key)
        break;}
    if(i==n)
       printf("No");
    else
        printf("%d",i+1);}
        return 0;
}
