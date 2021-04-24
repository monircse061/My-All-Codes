#include<bits/stdc++.h>
using namespace std;
long long int a[2*100050];
int main()
{
    long long int n,m;
    scanf("%I64d %I64d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    sort(a,a+n);
    if(a[m]==a[m-1]||m==0)
    {
        if(m==0&&a[0]>1)
        {
            cout<<a[0]-1;
        }
        else
        {
            cout<<-1;
        }
    }
    else
    {
        cout<<a[m-1];
    }
    return 0;
}
