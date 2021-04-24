#include <bits/stdc++.h>
using namespace std;
long long int s[1000000];
long long int f(long long int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return f(n-1)+f(n-2);
    }
}
int main()
{
    long long int n,m,a,b,c,j,l,o,e,t,x=0;
    scanf("%lld",&t);
    while(t--)
    {
        o=0,e=0;
        cin>>n>>m;
        if(n==1)
        {
            s[0]=1;
            s[1]=0;
        }
        else
        {
            s[0]=f(n-2);
            s[1]=f(n-1);
        }
        j=1;
        l=1;
        a=s[0];
        b=s[1];
        /**for(int i=n+1; i<=m; i++)
        {
            j++;
            c=a+b;
            a=b;
            b=c;
            s[j]=c;
            l=j;
        }
        for(int i=1; i<=l; i++)
        {
            if(s[i]==0)
            {
                e++;
            }
            else if(s[i]%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }

        }
        x++;**/
        //printf("Case %lld:\n",x);
        //printf("Odd = %lld\nEven = %lld\n",o,e);
        cout<<s[0]<<s[1];
    }
    return 0;
}

