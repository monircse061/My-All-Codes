#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>m1;
ll a[100009];
int main()
{
    ll n,sum=0,m,num=0;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        sum=0;
        m=a[i];
        while(m>0)
        {
            ll p=m%2;
            if(p!=0)
            {
                sum++;
            }
            m/=2;
        }
        m1[sum]++;
    }
    for(int i=1; i<=100009; i++)
    {

        num+=(m1[i]*(m1[i]-1)/2);
    }
    printf("%I64d",num);
    return 0;
}
