#include<bits/stdc++.h>
using namespace std;
int l,ar[10000],prime[10000],Div[10000];
void scieve(int n)
{
    prime[1]=2;
    l=1;
    int limit=sqrt(n);
    for(int i=3; i<=n; i+=2)
    {
        if(ar[i]==0)
        {
            l++;
            prime[l]=i;
            if(i<=limit)
            {
                for(int j=i*i; j<=n; j+=i*2)
                {
                    ar[j]=1;
                }
            }
        }
    }
}
int main()
{
    int n,num=1,res,num1=1,p;
    scanf("%d",&n);
    scieve(n);
    int n1=sqrt(n);
    for(int i=1; prime[i]<=n1; i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                Div[prime[i]]++;
                n/=prime[i];
            }
        }
    }
    if(n>1)
    {
        Div[n]++;
    }
    for(int i=2; i<=n1; i++)
    {
        if(Div[i]!=0)
        {
            num*=(Div[i]+1);
        }
    }
    for(int i=2; i<=n1; i++)
    {
        if(Div[i]!=0)
        {
            p=powl(i,(Div[i]+1));
            res=(p-1)/(i-1);
            num1*=res;
        }
    }//cout<<Div[2]<<" "<<Div[3]<<" "<<Div[5];
    printf("%d %d",num,num1);
    return 0;
}

