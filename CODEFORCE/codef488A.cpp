#include<bits/stdc++.h>
using namespace std;
int cont[1000];
int main()
{
    int n,k,a[100],b[100];
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<k; i++)
    {
        scanf("%d",&b[i]);
        cont[b[i]]=1;
    }
    for(int i=0; i<n; i++)
    {
        if(cont[a[i]]==1)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
