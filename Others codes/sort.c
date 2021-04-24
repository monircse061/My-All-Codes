#include<stdio.h>
main()
{
    int a[5]={8,3,1,6,2};
    int i,j,k,tem,n=5;i=0;
    for(i=0;i<n-1;i++)
        {
    for(j=i+1;j<n;j++)
        {if(a[i]>a[j])
        {tem=a[i];
        a[i]=a[j];
        a[j]=tem;}}}

     for(i=0;i<n;i++)
            printf("%d ",a[i]);
     return 0;
}
