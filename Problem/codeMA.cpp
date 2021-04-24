#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,j=0,a[10000];
    scanf("%d",&t);
    while(t--)
    {
        x=1;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1; i<n; i++)
        {
            if(a[i+1]-a[i]==1)
            {
                x=0;
                break;
            }
        }
        j++;
        if(x==0)
        {
            printf("Case %d: Yes\n",j);
        }
        else
        {
            printf("Case %d: No\n",j);
        }
    }
    return 0;
}
