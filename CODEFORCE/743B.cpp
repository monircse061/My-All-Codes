#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll bs(ll l,ll u,ll k,ll n)
{
    while(l<=u)
    {
        ll mid=(l+u)/2;
        if(k==mid)
        {
            break;
        }
        else if(k<mid)
        {
            u=mid-1;
            n--;
        }
        else
        {
            l=mid+1;
            n--;
        }
    }
    return n;

}
int main()
{
    ll n,k,num=1;
    scanf("%I64d %I64d",&n,&k);
    for(ll i=1; i<n; i++)
    {
        num=(num*2)+1;
    }//cout<<num<<" ";
    cout<<bs(1,num,k,n);
}
