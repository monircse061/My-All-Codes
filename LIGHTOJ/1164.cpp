#include<bits/stdc++.h>
using namespace std;

int a[100009];
struct abc
{
    long long int sum,prop;
};
abc tree[4*100009];
/**void init(int node,int L,int R)
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
}**/
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
long long int query(int node,int L,int R,int l,int r, long long int carry)
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
    long long int x1=query(left,L,mid,l,r,carry+(tree[node].prop));
    long long int x2=query(right,mid+1,R,l,r,carry+(tree[node].prop));
    return x1+x2;
}
int main()
{
    long long int n,m,l,r;
    int j=0,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        //init(1,1,n);
        j++;
        printf("Case %d:\n",j);
        for(int i=1; i<=m; i++)
        {
            long long int ck;
            scanf("%lld",&ck);
            if(ck==0)
            {
                long long int x;
                scanf("%lld %lld %lld",&l,&r,&x);
                update(1,1,n,l+1,r+1,x);
            }
            else
            {
                scanf("%lld %lld",&l,&r);
                printf("%lld\n",query(1,1,n,l+1,r+1,0));
            }
        }
        for(int i=1;i<=4*100009;i++){
            tree[i].sum=0;
            tree[i].prop=0;
        }
    }
    return 0;
}

