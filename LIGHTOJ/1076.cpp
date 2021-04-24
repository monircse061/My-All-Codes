#include<bits/stdc++.h>
using namespace std;
int n,m,a[100009];
int check(int cap)
{
    int sum=0,cnt=1;
    for(int i=1; i<=n; i++)
    {
        if(sum+a[i]<=cap)
        {
            sum+=a[i];
        }
        else
        {
            sum=a[i];
            cnt++;
        }
    }
    if(cnt>m)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int bs(int l,int u)
{
    int ans=0;
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(check(mid))
        {
            ans=mid;
            u=mid-1;
        }
        else
        {
            l=mid+1;
            ans=l;
        }
    }
    return ans;
}
int main()
{
    int j=0,t,x,sum;
    scanf("%d",&t);
    while(t--)
    {   x=-1,sum=0;
        scanf("%d %d",&n,&m);
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
            if(x<a[i])
            {
                x=a[i];
            }
            sum+=a[i];
        }//cout<<x<<" "<<sum;
        j++;
        printf("Case %d: %d\n",j,bs(x,sum));
    }
    return 0;
}
