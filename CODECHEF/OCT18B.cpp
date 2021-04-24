#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll p1,p2,k,t,n,res;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&p1,&p2,&k);
        if(p1==0&&p2==0||p1+p2<k)
        {
            printf("CHEF\n");
        }
        else
        {
            n=p1+p2;
            res=n/k;
            if(res%2==0)
            {
                printf("CHEF\n");
            }
            else
            {
                printf("COOK\n");
            }
        }
    }
    return 0;
}
