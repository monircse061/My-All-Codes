#include<bits/stdc++.h>
using namespace std;
long long int ar[2*1000009];
int main()
{
    long long int n,a,b,sum=0,e=0,a1=0,b1=0;
    scanf("%I64d %I64d %I64d",&n,&a,&b);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&ar[i]);
        if(ar[i]==1)
        {
            a1++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(ar[i]==1&&a>0)
        {
            a--;
            a1--;
        }
        else if(ar[i]==2&&b>0)
        {
            b--;
        }
        else if(ar[i]==1&&a==0&&b!=0)
        {
            sum+=1;
            a1--;
            b--;
        }
        else
        {
            if(ar[i]==2)
            {
                e+=ar[i];
            }
        }
    }
    if(sum>=a1)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",(a1-sum)+e);
    }
    return 0;
}
