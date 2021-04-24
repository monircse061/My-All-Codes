#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll prime[10009],fact[10009],ar[10009],res[1000009],ans;
void fun()
{
    for(int i=1; i<=109; i++)
    {
        fact[i]=0;
        res[i]=0;
    }
}
void scieve()
{
    int l=2,n=10200;
    prime[1]=2;
    int sq=sqrt(n+1);
    for(int i=3; i<=sq; i+=2)
    {
        if(ar[i]==0)
        {
            //cout<<i<<" ";
            prime[l]=i;
            l++;
            for(int j=i*i; j<=n+1; j+=i*2)
            {
                ar[j]=1;
            }
        }
    }
}
ll multiple(ll x,ll len)
{
    ll carry=0;
    for(int i=1; i<=len; i++)
    {
        ll p=res[i]*x+carry;
        res[i]=p%10;
        carry=p/10;
    }
    while(carry)
    {
        res[len+1]=carry%10;
        carry/=10;
        len++;
    }
    return len;
}
int main()
{
    scieve();
    ll t,n,a[100009],x,mul,num,Case=0;
    scanf("%lld",&t);
    while(t--)
    {
        memset(res,0,sizeof(res));
        memset(fact,0,sizeof(fact));
        res[1]=1;
        ans=0;
        scanf("%lld",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=1; i<=n; i++)
        {
            x=a[i];
            num=sqrt(x);
            for(int i=1; prime[i]<=num; ++i)
            {
                mul=1;
                if(x%prime[i]==0)
                {
                    while(x%prime[i]==0)
                    {
                        mul*=prime[i];
                        x/=prime[i];
                    }
                }
                fact[prime[i]]=max(mul,fact[prime[i]]);
            }
            if(x!=1)
            {
                fact[x]=max(x,fact[x]);
            }
        }
        ans=1;
        for(int i=1; i<=10009; i++)
        {
            if(fact[i]!=0)
            {
                //cout<<fact[i]<<" ";
                ans=multiple(fact[i],ans);
            }
        }//cout<<prime[26];
        Case++;
        printf("Case %lld: ",Case);
        for(ll i=ans; i>=1; i--)
        {
           printf("%lld",res[i]);
        }
        printf("\n");
        //fun();
    }
    return 0;
}
