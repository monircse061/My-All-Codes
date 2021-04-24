#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,sum,cont,t,j=0;
    scanf("%lld",&t);
    while(t--)
    {
        cont=1,sum=0;
        scanf("%lld %lld",&n,&m);
        while(1)
        {
            sum=sum*10+m;

            sum=sum%n;
            if(sum==0)
            {
                break;
            }cont++;
        }
        j++;
        printf("Case %lld: %lld\n",j,cont);
    }
    return 0;
}
