#include<bits/stdc++.h>
using namespace std;
#define Max INT_MAX;
int tree[4*100009],a[4*100009];
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
    if(tree[left]<tree[right])
    {
        tree[node]=tree[left];
    }
    else
    {
        tree[node]=tree[right];
    }
}
long long int query(int node,int L,int R,int l,int r)
{
    if(l>R||r<L)
    {
        return Max;
    }
    if(l<=L&&r>=R)
    {
        return tree[node];
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    int x=query(left,L,mid,l,r);
    int y=query(right,mid+1,R,l,r);
    if(x<y)
        return x;
    else
        return y;
}
int main()
{
    int t,n,m;
    int j=0;//cout<<Max;
    scanf("%d ",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        init(1,1,n);
        j++;
        printf("Case %d:\n",j);
        for(int i=1; i<=m; i++)
        {
            int l,r;
            scanf("%d %d",&l,&r);
            printf("%d\n",query(1,1,n,l,r));
        }
    }
    return 0;
}
