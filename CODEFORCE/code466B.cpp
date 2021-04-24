#include<bits/stdc++.h>
using namespace std;
long long int s,s1;
int main()
{
    long long int n,k,a,b,x,y,y1,y2,y3,c,sum,d;
    scanf("%I64d %I64d %I64d %I64d",&n,&k,&a,&b);
    sum=0;
    if(k==1||n<k)
    {
        sum=(n-1)*a;
    }
    else
    {
        x=n;
        while(x>=k)
        {
            sum=sum+((x%k)*a);
            x=x-(x%k);

            if(b>(x-x/k)*a)
            {
                sum=sum+((x-x/k)*a);
                x=x/k;
            }
            else
            {
                sum=sum+b;
                x=x/k;
            }
        }
        sum=sum+((x-1)*a);
    }
    cout<<sum<<endl;
    return 0;
}
