#include<bits/stdc++.h>
using namespace std;
int cont[10000];
int main()
{
    int n,a[100000],x,l=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(cont[x]==0)
        {
            a[l]=x;
            l++;
        }
        cont[x]++;
    }
    if(l>2)
    {
        printf("NO");
    }
    else
    {
        if(cont[a[0]]==cont[a[1]])
        {
            printf("YES\n");
            printf("%d %d",a[0],a[1]);
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
