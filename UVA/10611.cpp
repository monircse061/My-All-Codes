#include<bits/stdc++.h>
using namespace std;
int a[1000009],b[1000009];
int lowerbound(int l,int u,int key)
{

    while(u-l>=0)
    {
        int mid=(u+l)/2;
        if(key==a[mid])
        {
            u=mid-1;
        }
        else if(key>a[mid])
        {
            l=mid+1;
        }
        else
        {
            u=mid-1;
        }
    }
    return u;
}
int upperbound(int l,int u,int key)
{

    while(l<=u)
    {
        int mid=(u+l)/2;
        if(key==a[mid])
        {
            l=mid+1;
        }
        else if(key>a[mid])
        {
            l=mid+1;
        }
        else
        {
            u=mid-1;
        }
    }
    return l;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=1; i<=m; i++)
    {
        int x=lowerbound(1,n,b[i]);
        int y=upperbound(1,n,b[i]);
        if(a[x]!=0&&a[y]!=0)
            printf("%d %d\n",a[x],a[y]);
        else if(a[x]==0&&a[y]!=0)
        {
            printf("X %d\n",a[y]);
        }
        else if(a[x]!=0&&a[y]==0)
        {
            printf("%d X\n",a[x]);
        }
        else if(a[x]==0&&a[y]==0)
        {
            printf("X X\n");
        }
    }
    return 0;
}
