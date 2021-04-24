#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[1000009];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,f,a,b,m,ans=0;
        scanf("%lld %lld %lld %lld %lld",&n,&f,&a,&b,&m);
        ar[1]=f;
        for(int i=2; i<=n; i++)
        {
            ar[i]=( a * ar [ i-1 ] + b  )% m;
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(ar[j]>0)
                {
                    if( (ar[i]+ar[j]) ==(double) (ar[i]/ar[j]) ||(ar[i]-ar[j]) ==(double) (ar[i]/ar[j])||(ar[i]*ar[j]) ==(double) (ar[i]/ar[j]) )
                    {
                        ans++;

                    }
                    continue;
                }
                if( (ar[i]+ar[j]) == (ar[i]-ar[j])|| (ar[i]+ar[j]) == (ar[i]*ar[j])||(ar[i]-ar[j]) == (ar[i]*ar[j]) )
                {
                    ans++;
                }
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
