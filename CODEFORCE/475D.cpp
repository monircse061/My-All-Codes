#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int ar[100009],x[300005];
map<int,ll>v,v1,result;
int main()
{
    int n,q,ck,x1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&q);
    for(int i=1; i<=q; i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=1; i<=n; i++)
    {
        int j;
        for(auto p:v1)
        {
            v[__gcd(p.first,ar[i])]+=p.second;;

        }
        v[ar[i]]++;
        v1.clear();
        for(auto y:v)
        {
            v1[y.first]=y.second;
        }
        for(auto x:v1)
        {
            result[x.first]+=x.second;
        }
        v.clear();
    }

    for(int i=1; i<=q; i++)
    {
        printf("%I64d\n",result[x[i]]);
    }
    return 0;
}

