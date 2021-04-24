#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10009],b[10009],sum=0,sum1=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d ",&a[i]);
        sum+=a[i];
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
        sum1+=b[i];
    }
    if(sum1>sum)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}

