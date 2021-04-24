#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100][100],sum=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=n; j++)
        {
            sum+=a[j][i];
        }
        if(sum!=0){
             printf("NO");
             return 0;
        }

    }
        printf("YES");
    return 0;
}
