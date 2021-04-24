#include<stdio.h>
int main()
{
    int a[1000];int i,j,x,n,y,b,t;double d,m,z;
    scanf("%d",&t);
    while(t--)
    {scanf("%d",&n);
    z=n;x=0;b=0;
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    x=x+a[i];}
    y=x/n;
    for(j=0;j<n;j++)
    {if(a[j]>y)
        b++;}
        d=(double)(b/z);
        m=d*100;
        printf("%.3lf%%\n",m);}
        return 0;


}
