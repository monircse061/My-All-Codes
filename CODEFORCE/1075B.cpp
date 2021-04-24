#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n,k,x,l=0,ck,ck1,call=0,ans;
    scanf("%d %d",&n,&k);
    int ar[n+k+1],br[n+k+1];
    for(int i=1; i<=n+k; i++)
    {
        scanf("%d",&ar[i]);

    }
    for(int i=1; i<=n+k; i++)
    {
        scanf("%d",&x);
        if(x==1)
        {
            l++;
            br[l]=i;
        }
    }
    for(int i=br[1]-1; i>0; i--)
    {
        call++;
    }
    for(int i=1; i<=k; i++)
    {
        ans=call;
        call=0;
        if(i==k)
        {
            for(int i=br[k]+1; i<=n+k; i++)
            {
                ans++;
            }
            printf("%d",ans);
            continue;
        }

        int i1=br[i];
        int i2=br[i+1];
        for(int j=i1+1; j<=i2-1; j++)
        {
            int ck=abs(ar[i1]-ar[j]);
            int ck1=abs(ar[i2]-ar[j]);
            if(ck<=ck1)ans++;
            else call++;
        }
        printf("%d ",ans);
    }
    return 0;
}

