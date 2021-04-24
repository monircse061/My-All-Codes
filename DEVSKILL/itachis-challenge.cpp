#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[100009],tree[1000009];
void init(ll node,ll L,ll R)
{
    ll left;
    if(L==R)
    {
        tree[node]=ar[L]%1000000007;
        return ;
    }
    left=node*2;
    ll right=node*2+1;
    ll mid=(L+R)/2;
    init(left,L,mid);
    init(right,mid+1,R);
    tree[node]=((tree[left]%1000000007)+(tree[right]%1000000007))%1000000007;
}
void print(ll node,ll L,ll R)
{
    ll left;
    if(L==R)
    {
        //tree[node]=ar[L];
        // cout<<tree[node]<<" ";
        printf("%lld ",(tree[node]%1000000007));
        return ;
    }
    left=node*2;
    ll right=(node*2)+1;
    ll mid=(L+R)/2;
    print(left,L,mid);
    print(right,mid+1,R);
    //tree[node]=tree[left]+tree[right];
}
ll query(ll node,ll L,ll R,ll l,ll r)
{
    if(r<L||l>R)
    {
        return 0ll;
    }
    if(l<=L&&r>=R)
    {
        return tree[node]%1000000007;
    }
    //if(left>y || right<x) return 0LL;
    ///if(left>=x && right<=y) return tree[pos];
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(L+R)/2;
    ll x=query(left,L,mid,l,r);
    ll y=query(right,mid+1,R,l,r);
    return ((x%1000000007)+(y%1000000007))%1000000007;
}
void update(ll node,ll L,ll R,ll l,ll r,ll value)
{
    if(r<L||l>R)
    {
        return ;
    }
    if(L==R)
    {
        tree[node]=((tree[node]%1000000007)+(value%1000000007))%1000000007;
        return;
    }
    ll mid=(L+R)/2;
    ll left=node*2;
    ll right=node*2+1;
    update(left,L,mid,l,r,value);
    update(right,mid+1,R,l,r,value);
    tree[node]=((tree[left]%1000000007)+(tree[right]%1000000007))%1000000007;
}
ll POW(ll x,ll y)
{
    ll z=1;
    for(int i=1; i<=y%1000000007; i++)
    {
        z=((z%1000000007)*x)%1000000007;
    }
    return z%1000000007;
}
int main()
{
    ll n,m,x,y,z;
    ll sum,result,re;
    scanf("%lld",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&ar[i]);
    }
    init(1,1,n);
    scanf("%lld",&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%lld %lld %lld",&x,&y,&z);
        sum=query(1,1,n,x,y);
        //cout<<sum<<" ";
        re=POW(y-x+2,z%1000000007);
        result=(sum*(((re-1)%1000000007)/((y-x+2)-1))%1000000007)%1000000007;
        //cout<<result<<" *"<<endl;
        update(1,1,n,x,y,result);
    }
    //cout<<1;
    print(1,1,n);
    return 0;
}
