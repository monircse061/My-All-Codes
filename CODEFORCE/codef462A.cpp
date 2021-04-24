#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10000],b[10000];
    long long int n,m,c;
    scanf("%I64d %I64d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=0; i<m; i++)
    {
        scanf("%I64d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    long long int x[10000],l=0,y;
    for(int i=0; i<n; i++)
    {
        long long int y=a[i]*b[0];
        for(int j=0; j<m; j++)
        {
            long long int z=a[i]*b[j];
            if(y<z)
                y=z;
        }
        x[l]=y;
        l++;
    }
    sort(x,x+l);

    cout<<x[l-2];

    return 0;
}
