#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100009];
ll n,d,sum,sum1=0;
struct abc
{
    ll v;
    ll u;
};
abc e[100009];

bool compare(abc a,abc b)
{
    return a.u<b.u;
}
int main()
{

    scanf("%I64d %I64d",&n,&d);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d %I64d",&e[i].u,&e[i].v);
    }
    sort(e+1,e+n+1,compare);

    if(n==1)
    {
        printf("%I64d",e[n].v);
        return 0;
    }
    for(int i=2; i<=n; i++)
    {
        e[i].v+=e[i-1].v;
    }
        ll j=1,l=0;
        for(int i=1; i<=n; )
        {
           if(e[i].u-e[j].u<d){
            ll num=e[i].v-e[j-1].v;
            l=max(num,l);
            i++;
           }
           else{
            j++;
           }
        }

        printf("%I64d",l);

    return 0;
}
