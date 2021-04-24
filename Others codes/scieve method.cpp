#include<bits/stdc++.h>
using namespace std;
int cont[1000],ar[1000],prime[100],l;
void fun(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(cont[i]==0)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                cont[j]=1;
            }
        }
    }
}
void scieve(int n)
{
    l=1;
    int limit=sqrt(n);
    prime[1]=2;
    for(int i=3; i<=n; i+=2)
    {
        if(ar[i]==0)
        {
            l++;
            prime[l]=i;
            if(i<=limit)
            {
                for(int j=i*i; j<=n+1; j+=i*2)
                {
                    ar[j]=1;
                }
            }
        }
    }
}
int main()
{
     fun(100);
    for(int i=2; i<=100; i++)
    {    if(cont[i]==0)
    cout<<i<<" ";
        //cout<<prime[i]<<" ";
    }
}
