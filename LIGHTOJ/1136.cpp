#include<bits/stdc++.h>
using namespace std;
long long x,n,m,test,y=0,a,b,c,d,e;
int main()
{
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&n,&m);
       a=(n/3)*2;
       b=n%3;
       if(b==2)
        a=a+1;
       c=(m/3)*2;
       e=m%3;
       if(e==2)
        c=c+1;
       d=c-a;
       d=d+1;
       if(b==1)
        d=d-1;
       y++;
        printf("Case %lld: %lld\n",y,d);
    }
    return 0;
}
