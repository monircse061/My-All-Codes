#include<bits/stdc++.h>
#define val 100000
using namespace std;
int main()
{
    long long int n,i,j,x,s[val],t,y=0;
    scanf("%lld",&t);
    while(t--)
    {
        y++;
        scanf("%lld%lld%lld%lld%lld%lld",&s[0],&s[1],&s[2],&s[3],&s[4],&s[5]);
        scanf("%lld",&n);
        if(n>=6)
        {
            for(i=6; i<=n; i++)
            {
                x=0;
                for(j=i-1; j>=i-6; j--)
                {
                    x=x+s[j];
                }
                s[i]=x%10000007;
            }
        }
        printf("Case %lld: %lld\n",y,s[n]%10000007);
    }
    return 0;
}
