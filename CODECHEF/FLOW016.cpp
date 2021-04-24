#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b)
{
    if(b==0)
    {
        //cout<<a<<" ";
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
ll lcm(ll a,ll b)
{
    ll g=gcd(a,b);
    printf("%lld ",g);
    return (a/g)*b;
}
int main()
{
    ll a,b,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",lcm(a,b));
    }
    return 0;
}
