#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100009];
int main()
{
    ll n,ans,rmd,l=0;
    scanf("%lld",&n);
    ll n1=n;
    if(n1==0)
    {
        printf("0\n");
    }
    else
    {
        while(n1!=0)
        {
            if(n1/-2>=0&&n1<0)
            {
                if(n1%(-2)!=0)
                {
                    ans=abs((-n1/-2)-1);
                }
                else
                {
                    ans=n1/-2;
                }
                rmd=n1-(-2*ans);
                a[l]=rmd;
                l++;
                n1=ans;
            }
            else
            {
                ans=(n1/-2);
                rmd=n1-(ans*-2);
                a[l]=abs(rmd);
                l++;
                n1=ans;
            }
        }
        for(int i=l-1; i>=0; i--)
        {
            printf("%lld",a[i]);
        }
    }
    return 0;
}
