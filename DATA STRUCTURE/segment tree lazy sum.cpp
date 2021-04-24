#include<bits/stdc++.h>
using namespace std;
int a[100009];
struct abc
{
     int sum,prop;
};
abc tree[4*100009];
void init(int node,int L,int R)
{
    if(L==R)
    {
        tree[node].sum=a[L];
        return;
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    init(left,L,mid);
    init(right,mid+1,R);
    tree[node].sum=tree[left].sum+tree[right].sum;
}
void update(int node,int L,int R,int l,int r,int x)
{
    if(l>R||r<L)
    {
        return;
    }
    if(l<=L&&r>=R)
    {
        tree[node].sum+=(R-L+1)*x;
        tree[node].prop+=x;
        return;
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    update(left,L,mid,l,r,x);
    update(right,mid+1,R,l,r,x);
    tree[node].sum=tree[left].sum+tree[right].sum+((R-L+1)*tree[node].prop);
}
int query(int node,int L,int R,int l,int r, int carry)
{
    if(l>R||r<L)
    {
        return 0;
    }
    if(l<=L&&r>=R)
    {
        return tree[node].sum+(R-L+1)*carry;
    }
    int mid=(L+R)/2;
    int left=node*2;///R-L+1)*(R-L+1)*
    int right=node*2+1;
    int x1=query(left,L,mid,l,r,carry+(tree[node].prop));
    int x2=query(right,mid+1,R,l,r,carry+(tree[node].prop));
    return x1+x2;
}
int main()
{
    int n,m,l,r;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    init(1,1,n);
    for(int i=1; i<=m; i++)
    {  int ck;
        scanf("%d",&ck);
        if(ck==1)
        {
            int x;
            scanf("%d %d %d",&l,&r,&x);
            update(1,1,n,l,r,x);
        }
        else
        {
            scanf("%d %d",&l,&r);
            printf("%d",query(1,1,n,l,r,0));
        }
    }
    return 0;
}
