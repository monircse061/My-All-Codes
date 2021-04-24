#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll p[100],r[100],M[100],y[100];
ll modInverse(ll A,ll M)
{
    A=A%M;
    for(ll B=1; B<M; B++)
        if(((A*B)%M)==1)
            return B;
}

int main()
{
    ll t,n,mul,result,Case=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        mul=1;result=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld %lld",&p[i],&r[i]);
            mul*=p[i];
        }
        for(int i=1; i<=n; i++)
        {
            M[i]=mul/p[i];
            y[i]=modInverse(M[i],p[i]);
        }
        for(int i=1; i<=n; i++)
        {
            result+=(r[i]*M[i]*y[i]);
        }
        Case++;
          printf("Case %lld: %lld\n",Case,result%mul);
    }

    return 0;
}

