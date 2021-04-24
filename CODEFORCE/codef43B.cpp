#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,x,y=1,z,a,b,cont,s,c,d,sum;
    cin>>n>>m>>k;
    if(k<=n-1&&y==1)
    {
        cout<<k+1<<" "<<1;
        y=0;
    }
    sum=(n-1)+(m-1);
    if(k<=sum&&y==1)
    {
        cout<<n<<" "<<k-n+2;
    }
    else if(y==1)
    {
        x=n+m-2;
        s=(k-x)/(m-1);
        if((k-x)%(m-1)==0)
        {
            s-=1;
        }
        if(s%2==0)
        {
            a=n-s-1;
            b=m-((k-x-1)%(m-1));
        }
        else
        {
            a=n-s-1;
            b=((k-x-1)%(m-1))+2;
        }
        cout<<a<<" "<<b;
    }
    return 0;
}
