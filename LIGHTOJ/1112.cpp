#include<bits/stdc++.h>
using namespace std;
long long int a[100009],tree[4*100009];
void init(int node,int L,int R)
{
    if(L==R)
    {
        tree[node]=a[L];
        return;
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    init(left,L,mid);
    init(right,mid+1,R);
    tree[node]=tree[left]+tree[right];
}
void add(int node,int L,int R,int pos,int sum)
{
    if(pos>R||pos<L)
    {
        return;
    }
    if(L==R)
    {
        tree[node]+=sum;
        return;
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    add(left,L,mid,pos,sum);
    add(right,mid+1,R,pos,sum);
    tree[node]=tree[left]+tree[right];
}
long long int  Remove(int node,int L,int R,int pos)
{
    if(pos>R||pos<L)
    {
        return 0;
    }
    if(L==R)
    {
        long long int num;
        num=tree[node];
        tree[node]=0;
        return num;
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    long long int x=Remove(left,L,mid,pos);
    long long int y=Remove(right,mid+1,R,pos);
    tree[node]=tree[left]+tree[right];
    return x+y;
}
long long int query(int node,int L,int R,int l,int r)
{
    if(l>R||r<L)
    {
        return 0;
    }
    if(l<=L&&r>=R)
    {
        return tree[node];
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    long long int x=query(left,L,mid,l,r);
    long long int y=query(right,mid+1,R,l,r);
    return x+y;
}
int main()
{
    long long int t,n,m;int j=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
        }
        init(1,1,n);
        j++;
        printf("Case %d:\n",j);
        int ck,pos,l,r,sum;
        for(int i=1; i<=m; i++)
        {
            scanf("%d",&ck);
            if(ck==1)
            {
                scanf("%d",&pos);
                printf("%lld\n",Remove(1,1,n,pos+1));
            }
            else if(ck==2)
            {
                scanf("%d %d",&pos,&sum);
                add(1,1,n,pos+1,sum);
            }
            else
            {
                scanf("%d %d",&l,&r);
                printf("%lld\n",query(1,1,n,l+1,r+1));
            }
        }
        for(int i=1; i<=4*100009; i++)
            {
                tree[i]=0;
            }
    }
    return 0;
}
