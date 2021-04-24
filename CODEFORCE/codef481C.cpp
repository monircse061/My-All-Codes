#include<bits/stdc++.h>
using namespace std;
long long int a[2*1000009],b[2*1000009],cont[2*1000009];
int main()
{
    long long int n,m,i=1,num=1;
    scanf("%I64d %I64d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=1; i<=m; i++)
    {
        scanf("%I64d",&b[i]);
    }
    for(int i=1; i<=n; i++)
    {
        cont[i]=cont[i-1]+a[i];
    }

    for(int j=1; j<=m; j++)
    {
        if(b[j]<=cont[i])
        {
            cout<<num<<" "<<b[j]-cont[i-1]<<endl;
        }
        else
        {
            i++;
            num++;
            j--;
        }
    }
    return 0;
}
