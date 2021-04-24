#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100009],b[100009];
ll  bs(int l,int u,int key,int d)
{
    ll index;
    while(l<=u)
    {
        ll mid=(l+u)/2;
        if(key==a[mid]-a[d])
        {
            index=mid;
            break;
        }
        else if(key>a[mid]-a[d])
        {
            l=mid+1;
            index=l-1;//
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
    long long int n,key;
    scanf("%I64d %I64d",&n,&key);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=2; i<=n; i++)
    {
        a[i]+=a[i-1];
    }
    for(int i=1;i<=n;i++)
         {
               ll x=bs(i,n,key,i-1);
               b[i]=x-i+1;
         }
         sort(b+1,b+n+1);
         printf("%d",b[n]);
    return 0;
}
