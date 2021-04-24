#include<stdio.h>
int main()
{
    int l,j,m,n,h,x;
    while(scanf("%d",&n)!=EOF)
    {
        l=1;
        x=(l+n)/2;
        h=n;
        while(l<=h)
        {
            if(x*x>n)
            {
                h=x-1;
            }
            else if(x*x<n)
            {
                l=x+1;}
            x=(l+h)/2;
            if(x*x==n||(l>=h&&x*x<=n))
            {
                printf("%d\n",x);
                break;}
        }
    }
    return 0;
}
