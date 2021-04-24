#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[10000],x=1,sum,l;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    if(n==1)
    {
        x=1;
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            sum=0;
            for(int j=1; j<=n; j++)
            {
                if(j!=i)
                {
                    sum+=a[j];
                }
            }
            if(sum!=a[i])
            {
                l=i;
                x=0;
                break;
            }
        }
    }
    if(x==0)
    {
        printf("%I64d\n",(n-1));
        for(int i=1; i<=n; i++)
        {
            if(l!=i)
            {
                printf("%I64d ",i);
            }
        }
    }
    else
    {
        printf("-1");
    }
    return 0;

}
