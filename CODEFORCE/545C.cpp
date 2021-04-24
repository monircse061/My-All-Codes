#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct abc
{
    ll u,v;
};
abc e[1000009];
bool compare(abc a,abc b)
{
    return a.u<b.u;
}
int main()
{
    ll n,cont=1;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d %I64d",&e[i].u,&e[i].v);
    }
    sort(e+1,e+n+1,compare);ll j=1;
    for(ll i=2; i<n; i++)
    {
         if(e[i].u-e[i].v>e[i-1].u)
        {
            cont++;
        }

        else if(e[i].u+e[i].v<e[i+1].u)
        {
            e[i].u=e[i].u+e[i].v;
            cont++;
        }

      j=i;

    }
    if(j+1==n){
        cont++;
    }
    printf("%I64d",cont);
    return 0;
}
