#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000009];
int main()
{
    ll n,d,j=1,num=0;
    scanf("%I64d %I64d",&n,&d);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        while(a[i]-a[j]>d&&j<=n)
        {
            j++;
        }
        num+=(i-j)*(i-j-1)/2;
    }
    printf("%I64d",num);
    return 0;
}
