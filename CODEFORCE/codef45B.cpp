#include<bits/stdc++.h>
using namespace std;
int cont[10000009],a[2*1000009];
int main()
{
    int n,k,x,sum=0,l=0;
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(cont[x]==0)
        {
            a[l]=x;
            l++;
        }
        cont[x]++;
    }
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]>a[i-1]&&a[i]<=a[i-1]+k)
        {
            n=n-cont[a[i-1]];
        }
    }
    cout<<n;
    return 0;
}
