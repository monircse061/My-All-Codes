#include<bits/stdc++.h>
using namespace std;
int cont[10000],a[10000],b[10000];
int main()
{
    int n,p,q;
    scanf("%d %d",&n,&p);
    for(int i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
        cont[a[i]]++;
    }
    scanf("%d",&q);
    for(int i=0; i<q; i++)
    {
        scanf("%d",&b[i]);
        cont[b[i]]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(cont[i]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
