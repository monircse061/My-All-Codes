#include<bits/stdc++.h>
using namespace std;
long long int a[1000009];
int main()
{
    long long int t,n,cont;
    scanf("%lld",&t);
    while(t--)
    {
        cont=0;
        scanf("%lld",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(a[i]*2<=a[j])
                {
                    cont++;
                }
            }
        }
        printf("%lld\n",cont);
    }
    return 0;
}
