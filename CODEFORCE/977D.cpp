#include<bits/stdc++.h>
using namespace std;

#define ll long long int
vector<int>v[109];
queue<int>q;
bool visit[1000];
ll ck=0,br[1000],k;
ll ar[1000];
void bfs(int n)
{
    for(int i=1; i<=n; i++)
    {
        int cont=1;
        k=1;
        if(v[i].size()!=1)continue;
        q.push(i);
        visit[i]=1;
        while(!q.empty())
        {
            int u=q.front();
            br[k]=ar[u];
            k++;
            q.pop();
            for(int i=0; i<v[u].size(); i++)
            {
                int  p=v[u][i];
                //cout<<p;
                if(ar[u]*2==ar[p]||(ar[u]/3==ar[p]&&ar[u]%3==0))
                {
                    if(visit[v[u][i]]==0)
                    {
                        cont++;
                        visit[v[u][i]]=1;
                        q.push(p);
                    }
                }
            }
        }
        if(cont==n)
        {
            ck=1;
            for(int i=1; i<k; i++)
            {
                printf("%I64d ",br[i]);
            }
            printf("\n");
            break;
        }
        for(int l=1; l<=n; l++)
        {
            visit[i]=false;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%I64d",&ar[i]);
    }
    for(int i=1; i<=n; i++)
    {
        ll y=0,x=ar[i]*2;
        if(ar[i]%3==0)
        {
            y=ar[i]/3;
        }
        for(int j=1; j<=n; j++)
        {
            if(i==j)continue;
            if(ar[j]==x||ar[j]==y)
            {
                v[i].push_back(j);
                v[j].push_back(i);
            }
        }
    }
    bfs(n);
    //main();
    return 0;
}
