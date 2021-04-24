#include<stdio.h>
int main()
{
    int a[10000],i,n,m,x,y,j,b;
    scanf("%d",&b);
    while(b--)
    {scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0; j<n-1; j++)
    {
        if(a[j+1]<a[0])
        {
            a[0]=a[j+1];
        }
    }
    x=a[0];
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]>a[0])
        {
            a[0]=a[i+1];
        }
    }
    y=a[0];
    printf("%d\n",(y-x)*2);
    }
    return 0;
}
