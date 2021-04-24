#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,a[10009],x=-1,num,sum,m1;
    scanf("%I64d %I64d",&n,&m);
    m1=m;
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
        if(x<a[i])
        {
            x=a[i];
        }
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        num=x-a[i];
        if(num<=m)
        {
            a[i]+=num;
            m-=num;
        }
        else
        {
            a[i]+=m;
            m=0;
        }
    }//cout<<a[1];
    if(m==0)
    {
        sort(a,a+n);
        printf("%I64d ",a[n-1]);
    }
    else if(m<n||m%n!=0)
    {
        printf("%I64d ",a[0]+1+(m/n));
    }
    else
    {
        printf("%I64d ",a[0]+(m/n));
    }
    printf("%I64d",x+m1);
    return 0;
}
