#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,l=0,x,a,b,c,o,e,p,q,t;
    scanf("%lld",&t);
    while(t--){
    scanf("%lld %lld",&n,&m);
    p=n;o=0,e=0;
    q=m;
        n--;
        m--;
        a=m/3;
        b=(n-1)/3;
        if(m==0)a=0;
        if(n==0)b=-1;
        e=a-b;
        o=(q-p)+1-e;

    l++;

    {
        printf("Case %lld:\nOdd = %lld\nEven = %lld\n",l,o,e);
    }}
    return 0;
}
