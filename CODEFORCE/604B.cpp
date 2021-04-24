#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000009];
ll n,k,sum=0;
ll check(ll mid)
{
    ll num=0,j=0,cont=0,l=n;
    //cout<<mid<<" ";
    for(int i=1; i<=n&&i<=l; i++)
    {
        if(a[i]+a[l]<=mid&&i!=l)
        {
            l--;
            j++;
        }
        else if(a[i]+a[i+1]<=mid&&i+1<=n)
        {
            i++;
            j++; //num+=a[i];//cont++;
        }
        else
        {
            j++;
            cont=0;
            num=a[i];
            //cont++;
            if(i==n&&num>mid)
            {
                j=LONG_MAX;
            }
        }
    }
    if(j<=k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
ll bs(ll l,ll u)
{
    ll ans=0;
    while(l<=u)
    {
        ll mid=(l+u)/2;
        //cout<<mid<<" ";
        if(check(mid))
        {
            //cout<<mid<<" ";
            ans=mid;
            u=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    return ans;
}
int main()
{

    scanf("%I64d %I64d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
        sum+=a[i];
    }
    //cout<<"\\\\"<<endl;
    printf("%I64d",bs(a[1],sum));

    return 0;
}
