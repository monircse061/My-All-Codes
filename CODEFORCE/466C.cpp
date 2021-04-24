#include<bits/stdc++.h>
using namespace std;
long long int a[5*100009];
int main()
{
    long long int n,cont=0,c,d,e,ans=0;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=2; i<=n; i++)
    {
        a[i]+=a[i-1];
    }
    if(a[n]%3!=0)
    {
        printf("0\n");
        //return 0;
    }
    else
    {
        long long int p1=a[n]/3;
        long long int p2=p1*2;
        for(int i=1; i<=n-1; i++)
        {
            if(a[i]==p2)cont++;
        }
        for(int i=1; i<=n-1; i++)
        {
            if(a[i]==p2)cont--;
            if(a[i]==p1)ans+=cont;
        }
        printf("%I64d",ans);
    }
    return 0;
}
