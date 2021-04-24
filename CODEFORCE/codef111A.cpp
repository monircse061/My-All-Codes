#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],n,cont=0,sum=0,sum1=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        sum-=a[i];
        sum1+=a[i];
        cont++;
        if(sum1>sum)
        {
            break;
        }
    }
    printf("%d",cont);
    return 0;
}
