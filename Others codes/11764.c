#include<stdio.h>
int main()
{
    int a[50],i=0,h,l,n,j,t,k=0;
    scanf("%d",&t);
    while(t--)
    {   scanf("%d",&n);
          k++;h=0;l=0;
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);}
        for(j=0;j<n-1;j++)
    {if(a[j]<a[j+1])
        {h++;}
    else if(a[j]>a[j+1])
        {l++;}}
        printf("Case %d: %d %d\n",k,h,l);}
        return 0;
}
