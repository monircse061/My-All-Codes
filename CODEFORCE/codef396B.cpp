#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100009],n;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    sort(a+1,a+n+1);
    for(int i=1; i<=n-2; i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            if(a[i+1]+a[i+2]>a[i]&&a[i]+a[i+2]>a[i+1])
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
