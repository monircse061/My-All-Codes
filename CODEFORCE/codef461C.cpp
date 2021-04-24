#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a[100000],x,j=0,y=1;
    cin>>n>>k;
    if(n==k&&n>1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        for(long long int i=1; i<=k; i++)
        {
            x=n%i;
            a[x]++;
            if(a[x]>1)
            {y=0;
                cout<<"No"<<endl;
                break;
            }
        }
        if(y==1)
        {cout<<"Yes"<<endl;}
    }
    return 0;
}
