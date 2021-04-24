#include<bits/stdc++.h>
using namespace std;
int a[2*100009],b[2*100009];
int bs(int l,int u,int key)
{
    int index=0;
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(key>=a[mid])
        {
            l=mid+1;
            index=l-1;
        }
        else
        {
            u=mid-1;
            index=u;
        }
    }
    return index;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=m; i++)
    {
        scanf("%d",&b[i]);
    }
    sort(a+1,a+n+1);
    for(int i=1; i<=m; i++)
    {
        printf("%d ",bs(1,n,b[i]));
    }
    return 0;
}
