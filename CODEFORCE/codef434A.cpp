#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,num=1,sum,p,n1;
    scanf("%I64d %I64d",&n,&k);
    for(int i=1; i<=k; i++)
    {
        num*=10;
    }
    while(n%num!=0)
    {
        long long int tem=n;
        while(tem%10==0)
        {
            tem/=10;
        }
        int mod=tem%10;
        //cout<<tem<<" ";
        if(mod==5)
        {
            n*=2;
        }
        else
        {
            if(mod==2||mod==4||mod==6||mod==8)
            {
                n*=5;
            }
            else
            {
                n*=10;
            }
        }
    }
    printf("%I64d",n);
    return 0;
}
