#include<bits/stdc++.h>
using namespace std;
int a[1000009];
int main()
{
    int n,sum=0,cont=0,half;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    half=sum/2;
    if(sum%2!=0)
    {
        half=(sum/2)+1;
    }
    for(int i=1; i<=n; i++)
    {
        cont+=a[i];
        if(cont==half||cont>half)
        {
            printf("%d\n",i);
            break;
        }
    }
}
