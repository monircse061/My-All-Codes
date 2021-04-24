#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum,sum1;
    scanf("%I64d",&n);
    if(n==1||n==2)
    {
        printf("-1");
    }
    else
    {
        if(n%2!=0)
        {
            sum=.5*(1+((n*n)));
            sum1=sum-1;
        }
        else
        {
            sum=1+((n*n)/4);
            sum1=sum-2;
        }
        printf("%I64d %I64d",sum1,sum);
    }
    return 0;
}
