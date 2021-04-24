#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[1000009],br[1000009];
int main()
{
    ll t,n,pos,x,sum,p;
    scanf("%lld",&t);
    while(t--)
    {
        pos=0,x=0,sum=0,p;
        scanf("%lld",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&ar[i]);
        }
        for(int i=1; i<=n; i++)
        {
            if(ar[i]!=0)
            {
                br[i]=sum+ar[i];
                sum=br[i];
            }

        }
        //for(int i=1; i<=n; i++)
        {
            //cout<<br[i]<<" ";
        }
        for(ll i=1,j=1; i<n;)
        {
            if(br[j]==0)i++;
            i+=br[j];
            j=i;//cout<<i<<" ";
            x++;
        }//cout<<endl;
        printf("%lld\n",x);
        for(int i=1; i<=n; i++)
        {
            br[i]=0;
        }
    }
    return 0;
}
/**
#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll sum=a[1],su=a[1],x=1,j=0,k=1;

        for(int i=2;i<=n;i++)
        {
            k++;
            j++;
            su+=a[i];
//cout<<j<<" "<<su<<endl;
            if(j==sum&&k!=n)
            {
                sum=su;
                j=0;
                x++;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}**/


