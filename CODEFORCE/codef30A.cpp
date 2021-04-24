#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,a[10000],sum=0,l,cont=0;
    scanf("%d %d %d",&n,&k,&x);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    l=n;
    for(int i=n-1; i>=0; i--)
    {
        if(x<a[i])
        {
            cont++;
        }
        if(cont==k)
        {
            break;
        }
    }
    l=n-cont;
    sum+=cont*x;
    for(int i=0; i<l; i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
