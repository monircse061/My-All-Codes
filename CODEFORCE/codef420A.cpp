#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int n,x;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            x=0;
            if(a[i][j]!=1)
            {
                //cout<<a[i][j]<<" ";
                for(int k=1; k<=n; k++)
                {
                    if(a[i][j]==a[i][k])
                    {
                        continue;
                    }
                    for(int l=1; l<=n; l++)
                    {
                        if(a[i][j]==a[l][j])
                        {
                            continue;
                        }
                        if(a[i][j]==a[i][k]+a[l][j])
                        {
                            x=1;
                            break;
                        }
                    }
                       if(x==1)
                    {
                        break;
                    }
                }

                if(x==0)
                {
                    printf("NO");
                    return 0;
                }
            }
        }
    }
    printf("YES");
    return 0;
}
