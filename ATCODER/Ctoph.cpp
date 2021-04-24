#include<bits/stdc++.h>
using namespace std;
int ar[1000009];
int main()
{
    int n,k,x;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    scanf("%d",&k);

    for(int i=1; i<=k; i++)
    {
        scanf("%d",&x);
        printf("%d\n",ar[x]);
    }
    return 0;
}
