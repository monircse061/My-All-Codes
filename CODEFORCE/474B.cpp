#include<bits/stdc++.h>
using namespace std;
int a[100009];
long long int bs(long long int l,long long int u,long long int key)
{
    long long int index;
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(key==a[mid])
        {
            index=mid;
            break;
        }
        else if(key>a[mid])
        {
            l=mid+1;
            index=l;
        }
        else if(key<a[mid])
    {
        u=mid-1;
        index=u+1;
    }
}
return index;
}
int main()
{
    long long int n,m,q[100009],b[100009];
    scanf(" %I64d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    scanf("%I64d",&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%I64d",&q[i]);
    }
    //b[1]=a[1];
    for(int i=2; i<=n; i++)
    {
        a[i]+=a[i-1];
        //cout<<a[i]<<" ";
    }
    for(int i=1; i<=m; i++)
    {
//cout<<q[i]<<" ";
        printf("%I64d\n", bs(1,n,q[i]));
    }
    return 0;
}
