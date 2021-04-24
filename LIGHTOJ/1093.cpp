#include<bits/stdc++.h>
using namespace std;
int tree[4*100009],a[100009],tree1[4*100009];
void init(int node,int L,int R)
{
    if(L==R)
    {
        tree[node]=a[L];
        tree1[node]=a[L];
        return;
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    init(left,L,mid);
    init(right,mid+1,R);
    if(tree[left]>tree[right])
    {
        tree[node]=tree[left];
    }
    else
    {
        tree[node]=tree[right];
    }
    if(tree1[left]<tree1[right])
    {
        tree1[node]=tree1[left];
    }
    else
    {
        tree1[node]=tree1[right];
    }
}
int Max(int node,int L,int R,int l,int r)
{
    if(l>R||r<L)
    {
        return INT_MIN;
    }

    if(l<=L&&r>=R)

    {
        return tree[node];
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    int x=Max(left,L,mid,l,r);
    int y=Max(right,mid+1,R,l,r);
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int Min(int node,int L,int R,int l,int r)
{
    if(l>R||r<L)
    {
        return INT_MAX;
    }

    if(l<=L&&r>=R)

    {
        return tree1[node];
    }
    int mid=(L+R)/2;
    int left=node*2;
    int right=node*2+1;
    int x=Min(left,L,mid,l,r);
    int y=Min(right,mid+1,R,l,r);
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int t,n,d,l,cont[100009],j=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&d);l=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        init(1,1,n);
        for(int i=1; i<=n-d+1; i++)
        {
            int x=Min(1,1,n,i,i+d-1);
            int y=Max(1,1,n,i,i+d-1);
            //cout<<x<<" "<<y;
            int d=y-x;
            cont[l]=d;
            //cout<<x<<endl;
            l++;
        }
        sort(cont,cont+l);
        //cout<<l<<endl;
        j++;
        printf("Case %d: %d\n",j,cont[l-1]);
    }
    return 0;
}
