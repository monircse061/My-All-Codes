#include<bits/stdc++.h>
using namespace std;
#define val 1000000
long long a[val],b[val],c[val];
int main()
{
    long long i,j,s=0,sum,n,m,k=0;
    scanf("%I64d%I64d",&n,&m);
    for(i=1; i<n+1; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=1; i<(2*m+1); i++)
    {
        scanf("%I64d",&b[i]);
    }
    for(j=1; j<((2*m)+1); j++)
    {
        c[b[j]]++;
        k++;
        if(c[b[j]]==1&&c[b[j-1]]==1&&k==2)
        {
            s=s+a[b[j-1]];
        }
        if(k==2)
        {
            k=0;
            a[b[j]]=0;
            a[b[j-1]]=0;
        }
    }
    sum=0;
    for(i=1; i<n+1; i++)
    {
        if(a[i]!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("%I64d\n",sum+s);
    return 0;
}
