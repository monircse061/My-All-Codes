#include<stdio.h>
int main()
{
    long long  a[1100],i,j,x,l,n;
    while(scanf("%lld",&n)==1)
    {
        l=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }N
        for(i=0;i<n-1;i++)
        {
            for(j=1;j<n;j++)
            {
                if(a[j-1]>a[j])
                {
                    x=a[j-1];
                    a[j-1]=a[j];
                    a[j]=x;
                    l++;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n",l);
    }
    return 0;
}
