#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,m,d,x,y,z,a,b,re,sum,t;
    cin>>t;
    while(t--)
    {
        scanf("%I64d %I64d %I64d %I64d",&n,&k,&m,&d);
        b=m;
        sum=0;
        while(1)
        {
            z=0;
            x=n/b;
            //y=k/x;
            z=x/k;
            if(x%k!=0)
            {
                z=z+1;
            }
            if(z>=0)
            {
                re=b*(z);
            }
            else
            {
                re=x;
            }
            if(z<=d&&b<=m&&sum<re)
            {
                sum=re;
            }
            if(z>=d)
            {
                break;
            }
            //cout<<z<<" "<<b<<" "<<re<<endl;
            b--;

        }
        cout<<sum<<endl;
    }
    return 0;
}
