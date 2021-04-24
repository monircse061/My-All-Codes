#include<bits/stdc++.h>
using namespace std;
int main()
{
    double d,x=-1.0;int a[10000],n,m;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    if(a[1]!=0)
    {
        x=(a[1]-0);
    }
    for(int i=1; i<n; i++)
    {
        d=(double)(a[i+1]-a[i])/2.0;
        if(x<d)
        {
            x=d;
        }
    }
    if(a[n]!=m)
    {
        d=m-a[n];
        if(x<d)
        {
            x=d;
        }
    }
    printf("%.10lf",x);
    return 0;
}
