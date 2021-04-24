#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,re=0,sum;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    if(a<n&&a<m)
    {
        if(m%a!=0)
        {
            sum=(m/a)+1;
            if(n%a!=0)
            {
                re=((n/a)+1)*sum;
            }
            else
            {
                re=(n/a)*sum;
            }
        }
        else
        {
            sum=(m/a);
            if(n%a!=0)
            {
                re=((n/a)+1)*sum;
            }
            else
            {
                re=(n/a)*sum;
            }
        }
    }
    else if(a<n)
    {
        if(n%a!=0)
        {
            re=(n/a)+1;
        }
        else
        {
            re=n/a;
        }
    }
    else if(a<m)
    {
        if(m%a!=0)
        {
            re=(m/a)+1;
        }
        else
        {
            re=m/a;
        }
    }
    else
    {
        re=1;
    }
    printf("%I64d",re);
    return 0;
}
