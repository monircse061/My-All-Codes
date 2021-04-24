#include<bits/stdc++.h>
using namespace std;
long long int cont[100009];
struct abc
{
    long long int u,v,w;
};
abc e[100009];
bool compare(abc x,abc y)
{
    return x.u<y.u;
}
int main()
{
    long long int n,k,a,b,p=0,a1[100009];
    scanf("%I64d %I64d",&n,&k);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a);
        e[i].u=a;
    }
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&b);
        e[i].v=b;
        e[i].w=i;
    }
    sort(e,e+n,compare);
    for(int i=0; i<n; i++)
    {
        cont[i+1]=cont[i]+e[i].v;

    }
    for(int i=1; i<=n; i++)
    {
        long long int j=k;
        if(j<i)
        {
            long long int l=1,sum=cont[k],x=-1;
            for( j=k; j<i; j++)
            {
                if(j!=k)
                {
                    sum=cont[j]-cont[l];
                    l++;
                }
                if(x<sum)
                {
                    x=sum;
                }
            }
            a1[e[i-1].w]=x+e[i-1].v;
        }
        else
        {
            a1[e[i-1].w]=cont[i];
        }
    }
    for(int i=0;i<n;i++){
        printf("%I64d ",a1[i]);
    }
    return 0;
}
