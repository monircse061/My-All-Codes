#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[5],sum=0;
    scanf("%d %d %d %d",&n,&a[0],&a[1],&a[2]);
    if(n==1)
    {
        cout<<0<<endl;
    }
    else
    {
        sort(a,a+2);
        sum+=a[0];
        sort(a,a+3);
        sum+=a[0]*(n-2);
        cout<<sum<<endl;
    }
    return 0;
}
