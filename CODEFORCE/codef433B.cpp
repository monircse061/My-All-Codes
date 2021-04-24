#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,sum=0,x=1;
    scanf("%I64d %I64d",&n,&m);
    if(n>2&&m==1)
    {
        printf("1 2");
    }
    else if(n==m||m==0||n==1)
    {
        printf("0 0");
    }
    else
    {
        int i;
        for( i=1; i<=n; i+=3)
        {
            if(i!=1)
            {
                sum+=2;
            }
            m--;
            if(m==0)
            {
                x=0;
                //sum+=(n-i*2);
                break;
            }
        }
        if(x==1)
        {
            sum+=(n-(i-3));
        }
        if(x==0&&n-i>=2)
        {
            sum+=2;
        }
        else if(x==0)
        {
            sum+=(n-i);
        }
        sum-=m;
        printf("1 %I64d",sum);
    }

    return 0;
}
