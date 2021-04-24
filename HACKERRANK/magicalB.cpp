#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll cont[1000009];
ll div1[1000009],b[1000009],a[100009];
ll fun(ll n)
{
    if(n==0)
    {
        return 1;
    }
    else
        return n*fun(n-1);
}
void prime()
{
    int l=0;
    for(int i=2; i<=100009; i++)
    {
        if(cont[i]==0)
        {
            a[l]=i;
            l++;
            for(int j=2; i*j<=100009; j++)
            {
                cont[i*j]=1;
            }
        }
    }
}
int main()
{
    prime();
    //for(int i=0;i<=100;i++)cout<<a[i]<<" ";
    ll l=0,num=0,num1,sum,t;
    scanf("%I64d",&t);
    while(t--)
    {
        ll n,n1;
        scanf("%I64d",&n);
        ll c=0;
        num=0,num1=0,sum=1;
        n1=n;
        if(cont[n]==0)
        {
            printf("1\n");
        }
        else
        {
            for(int i=0; n1>1; i++)
            {
                while(n1%a[i]==0&&n1>1)
                {
                    n1/=a[i];
                    num++;
                    div1[a[i]]++;
                }
                c++;
            }
            num1=fun(num);
            for(int j=0; j<c; j++)
            {
                if(div1[a[j]]>1)
                {
                    sum*=fun(div1[a[j]]);
                }
                if(div1[a[j]]>0)
                {
                    //b[a[j]]=0;
                    div1[a[j]]=0;
                }
            }
            printf("%I64d\n",num1/sum);
        }
    }
    return 0;
}
