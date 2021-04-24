#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll s,a,b,c,sum,x,t;
    scanf("%I64d",&t);
    while(t--)
    {
        scanf("%I64d %I64d %I64d %I64d",&s,&a,&b,&c);
        sum=(s/c);
        x=((sum/a)*b)+sum;
        printf("%I64d\n",x);
    }
    return 0;
}
