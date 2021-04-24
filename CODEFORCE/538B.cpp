#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
ll a[1000009],b[1000009],ans=INT_MIN;
int main()
{
    ll n,mod,num=1,x,p;
    scanf("%I64d",&n);
    while(n>0){
       mod=n%10;
       ans=max(mod,ans);
       for(int i=1;i<=mod;i++)a[i]+=num;
       num*=10;
       n/=10;
    }
    printf("%I64d\n",ans);
    for(int i=1; i<=ans; i++)
    {
        printf("%I64d ",a[i]);
    }
    return 0;
}
