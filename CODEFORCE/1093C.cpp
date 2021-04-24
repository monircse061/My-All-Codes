#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[2*1000009],br[2*1000009];
int main()
{
    ll n;
    scanf("%I64d",&n);
    for(int i=1; i<=n/2; i++)
    {
        scanf("%I64d",&br[i]);
    }
    for(int i=1,j=n,k=1; k<=n/2; k++,i++,j--)
    {
        if(k==1)
        {
            ar[i]=0;
            ar[j]=br[k];
            continue;
        }
        if(br[k]==(ar[i-1]+ar[j+1]))
        {
            ar[i]=ar[i-1];
            ar[j]=ar[j+1];
        }
        else if(br[k]<(ar[i-1]+ar[j+1])){
            ar[i]=ar[i-1];
            ar[j]=abs(br[k]-ar[i-1]);
        }
        else
        {
            ar[i]=abs(ar[j+1]-br[k]);
            ar[j]=ar[j+1];
        }
    }
    for(int i=1; i<=n; i++)
    {
        printf("%I64d ",ar[i]);
    }
    return 0;
}
