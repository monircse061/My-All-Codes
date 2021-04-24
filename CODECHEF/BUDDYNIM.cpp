#include<bits/stdc++.h>
using namespace std;
int ar[1000],br[1000];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,x=1,y,ck=1;
        scanf("%d %d",&n,&m);
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ar[i]);
            if(ar[i]==0)
            {
                x=0;
            }
        }
        for(int i=1; i<=m; i++)
        {
            scanf("%d",&br[i]);
        }
        sort(ar+1,ar+n+1);
        reverse(ar+1,ar+n+1);
        sort(br+1,br+m+1);
        reverse(br+1,br+m+1);
        if(ar[1]!=0)
        {
            for(int i=1,j=1; i<=n||j<=m; i++,j++)
            {
                if(ar[i]==0&&br[j]==0)
                {
                    printf("Bob\n");
                    ck=0;
                    break;
                }
                else if((br[j]==0&&ar[i]!=0)||(br[j]!=0&&ar[i]==0))
                {
                    printf("Alice\n");
                    ck=0;
                    break;
                }
            }
        }
        else if(ar[1]==0)
        {
            printf("Bob\n");
            ck=0;
        }
         if(x!=0&&n==m&&ck==1)
        {
            printf("Bob\n");
        }
        int l=max(n,m);
        for(int i=1; i<=l; i++)
        {
            ar[i]=0,br[i]=0;
        }
        //else if(n>m&&ar[n]==0)
    }
    return 0;
}




