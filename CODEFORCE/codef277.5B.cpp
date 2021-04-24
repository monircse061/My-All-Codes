#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[1000],b[1000],cont=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d",&b[i]);
    }
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(b[j]!=0&&abs(a[i]-b[j])<=1)
            {
                cont++;b[j]=0;
                break;
            }
        }
    }
    printf("%d",cont);
    return 0;
}
