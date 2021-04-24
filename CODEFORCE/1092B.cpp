#include<bits/stdc++.h>
using namespace std;
int ar[1009];
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    sort(ar+1,ar+n+1);
    for(int i=1; i<=n; i+=2)
    {
        sum+=abs(ar[i]-ar[i+1]);
    }
    printf("%d",sum);
    return 0;
}
