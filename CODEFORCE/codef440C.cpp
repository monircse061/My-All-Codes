#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,x,pot=0,a[100009];
    scanf("%I64d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=0; i<t; i++)
    {
        pot=0;x=1;
        n=a[i];
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(pot<i)
                {
                    pot=i;
                }
                x=0;
            }
        }
        if(x==0)
        {
            printf("%d\n",pot);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
