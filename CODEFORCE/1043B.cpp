#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int ar[1009],x[1009],con[1009];
int main()
{
    ll n,l=0,ck,cont,ck1;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&ar[i]);
    }
    for(int i=1; i<=n; i++)
    {
        x[i-1]=(ar[i]-ar[i-1]);
    }
    for(int k=1; k<=n; k++)
    {
        ck1=1;

        for(int i=1; i<=n; i++)
        {
            ck=x[(i-1)%k];
            if(ar[i]!=ck+ar[i-1])
            {
                ck1=0;
                break;
            }

        }

    if(ck1!=0)
    {
        l++;
        con[l]=k;
    }
}
printf("%I64d\n",l);
for(int i=1; i<=l; i++)
{
    printf("%I64d ",con[i]);
}
return 0;
}
