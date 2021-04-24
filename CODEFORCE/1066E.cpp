#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 998244353
ll cont[2*100009],br[2*100009];
ll bigmod(ll a,ll b,ll m)
{
    if(b==0)
    {
        return 1%m;
    }
    ll x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*a)%m;
    return x;
}
int main()
{
    ll n,m,num,a=0,b=0,res=0;
    string st1,st2;
    scanf("%I64d %I64d",&n,&m);
    cin>>st1>>st2;
    for(int i=n-1,j=1; i>=0; i--,j++)
    {
        if(st1[i]=='1')
        {
            cont[j]=(cont[j-1]+bigmod(2ll,j-1,M))%M;
        }
        else
        {
            cont[j]=cont[j-1];
        }//cout<<cont[j]<<" ";
    }
    for(int i=0,j=m; i<m; i++,j--)
    {
        if(st2[i]=='1')
        {
            if(j>=n)
            {
                res=(res+cont[n])%M;
            }
            else
            {
                res=(res+cont[j])%M;
            }
        }
    }
    printf("%I64d",res%M);
    return 0;
}
