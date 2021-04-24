#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,x,s,ck,a[100009],b[100009];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&x,&s);
        for(int i=1; i<=s; i++)
        {
            scanf("%lld %lld",&a[i],&b[i]);
        }
        if(s==1)
        {
            if(a[1]!=x&&b[1]==x)
            {
                ck=a[1];
            }
            else if(a[1]==x&&b[1]!=x)
            {
                ck=b[1];
            }
            else{
                ck=x;
            }
        }
        else
        {
            if(a[1]!=x&&x==b[1])
            {
                ck=a[1];
            }
            else if(x!=b[1]&&x==a[1])
            {
                ck=b[1];
            }
            else{
                ck=x;
            }
            for(int i=1; i<s; i++)
            {
                if(a[i+1]!=ck&&ck==b[i+1])
                {
                    ck=a[i+1];
                }
                else if(b[i+1]!=ck&&ck==a[i+1])
                {
                    ck=b[i+1];
                }
            }
        }
        printf("%lld\n",ck);
    }
    return 0;
}
