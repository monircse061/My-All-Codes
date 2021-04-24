#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,cont=0,mod,ans=0,A,B,p=0,n1;
        scanf("%lld %lld %lld",&n,&A,&B);
        n1=n;
        while(n1>0)
        {
            mod=n1%2;
            n1/=2;
            cont++;
            if(cont>=A&&cont<=B&&mod==0)
            {
                p++;
            }
            else if(cont>=A&&cont<=B&&mod==1)
            {
                p++;
                ans+=powl(2,p-1);
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
