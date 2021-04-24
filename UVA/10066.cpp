#include<bits/stdc++.h>
using namespace std;
int ar1[109],ar2[109],l[109][109];
int main()
{
    int n,m,res,t,Case=0;
    while(scanf("%d %d",&n,&m)&&(n!=0||m!=0))
    {  res=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ar1[i]);
        }
        for(int i=1; i<=m; i++)
        {
            scanf("%d",&ar2[i]);
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(ar1[i]==ar2[j])
                {
                    l[i][j]=1+l[i-1][j-1];
                }
                else
                {
                    l[i][j]=max(l[i][j-1],l[i-1][j]);
                }
                res=l[i][j];
            }
        }
        Case++;
        printf("Twin Towers #%d\n",Case);
        printf("Number of Tiles : %d\n\n",res);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                l[i][j]=0;
            }
        }
    }
    return 0;
}
