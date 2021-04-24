#include<bits/stdc++.h>
using namespace std;
int a[100009];
int bs( int l, int u,int key)
{
    int index;
    while(l<=u)
    {
        int mid=(l+u)/2;
        //if(key==a[mid])
        {
            //index=mid;
            //break;
           // l=mid+1;
            //index=l-1;
        }
        if(key>=a[mid]) //else
        {
            l=mid+1;
            index=l-1;
        }
        else if(key<a[mid])
        {
            u=mid-1;
            index=u;//+1
        }
    }
    return index;
}
int main()
{
    int n,m,q[100009],b[100009];
    scanf(" %d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    scanf("%d",&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d",&q[i]);
    }
    for(int i=1; i<=m; i++)
    {
//cout<<q[i]<<" ";
        printf("%d\n", bs(1,n,q[i]));
    }
    return 0;
}
