#include<bits/stdc++.h>
using namespace std;
int cont[10000];
int main()
{
    int n,x,l=0,a[10000],b[10000];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        if(cont[a[i]]==0)
        {
            b[l]=a[i];
            l++;
        }
        cont[a[i]]++;
    }
    printf("%d\n",l);
    for(int i=l-1; i>=0; i--)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
