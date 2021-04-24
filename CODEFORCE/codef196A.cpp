#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[10000],sum=0,x=10000000,l;
    scanf("%d %d",&n,&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+m);
    for(int i=0; i<=m-n; i++)
    {
        l=i;
        sum=0;
        for(int j=0; j<n-1; j++)
        {
            sum+=a[l+1]-a[l];
            l++;
        }
        if(x>sum)
        {
            x=sum;
        }
    }
    printf("%d",x);
    return 0;
}
