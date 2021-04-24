#include<bits/stdc++.h>
using namespace std;
long long int big(long long int a,long long int b,long long int m)
{
    if(b==0)
        return 1%5;
    long long int x=big(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}
int main()
{
    long long int a,b,c,sum,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        sum=0;
        for(int i=1; i<=a; i++)
        {
            c=big(i,b,5);
            sum+=c;
        }
        cout<<sum%5<<endl;
    }
    return 0;
}
