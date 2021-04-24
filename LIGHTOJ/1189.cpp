#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
long long int fun(long long int n)
{
    if(n==0||n==1)
        return 1;
    else
        return fun(n-1)*n;
}
int main()
{
    for(long long int i=0; i<=20; i++)
    {
        a[i]=fun(i);
    }
    long long int n,j,b[100000],k=0,t;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);
        j=0;
        long long int z=n;
        for(long long int i=20; i>=0; i--)
        {
            if(z>=a[i])
            {
                j++;
                z=z-a[i];
                b[j]=i;
            }
            if(z==0)
            {
                break;
            }
        }
        k++;
        if(z==0)
        {
            for(long long int i=j; i>=1; i--)
            {
                if(i==j)
                {
                    cout<<"Case "<<k<<": ";
                }
                cout<<b[i]<<"!";
                if(i>1)
                    cout<<"+";
            }
            cout<<endl;
        }
        else
        {
            cout<<"Case "<<k<<": impossible"<<endl;
        }
    }
    return 0;
}
