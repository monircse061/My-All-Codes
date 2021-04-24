#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ar[105],ans,m;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&ar[i]);
        m=ar[i]%10;
        ans=0;
        if(m==9)
        {
            ans+=2;
            ar[i]-=m;
        }
        else if(m==1)
        {
            ans++;
            ar[i]-=7;
        }
        else if((m!=0&&ar[i]<=7)||m==7){

              ar[i]-=m;
              ans++;
        }

        if(ar[i]!=0)
        {
            ans+=(ar[i]/2);
        }
        printf("%d\n",ans);
    }
    return 0;
}
