#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,a,k,s1,s2,x;
    while(scanf("%I64d %I64d %I64d %I64d",&n,&m,&a,&k)&&n!=0&&m!=0&&a!=0&&k!=0)
    {
        s1=n,s2=k+a;
        x=0;
        for(int i=1; i<=10000; i++)
        {
            if(s1==s2)
            {
                x=1;
                break;
            }
            if(s1<s2)
            {
                s1+=m;
            }
            else
            {
                s2+=a;
            }
        }
        if(x==1)
        {
            printf("%I64d\n",s1);
        }
        else
        {
            printf("Impossible\n");
        }
    }
    return 0;
}
