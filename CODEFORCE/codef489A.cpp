#include<bits/stdc++.h>
using namespace std;
int cont[1000000],a[100009];
int main()
{
    int n,sum=0,x;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]!=a[i+1]&&a[i]!=0)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
