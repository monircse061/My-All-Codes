#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>v[150009];
bool visit[150009];
ll node=0,edge=0,ans=0;
int par[150009];
map<int,int>v1[150009];
void fun(int n)
{
    for(int i=1; i<=n; i++)
    {
        par[i]=i;
    }
}
void dfs(int n)
{
    visit[n]=1;
    node++;
    for(int i=0; i<v[n].size(); i++)
    {
        int b=v[n][i];
        if(!visit[b])
        {
            //cout<<n<<" "<<b<<"  1"<<endl;
            edge++;
            v1[n][b]=1;
            v1[b][n]=1;
            par[b]=n;
            dfs(b);
        }
        else if(par[n]!=b&&visit[b]&&v1[n][b]==0&&v1[b][n]==0)
        {
            edge++;
            v1[n][b]=1;
            v1[b][n]=1;
            //cout<<n<<" "<<b<<"  2"<<endl;
        }
    }
}
int main()
{
    int n,m,x,y;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    fun(n);
    for(int i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            //cout<<1;
            dfs(i);
            ans=0;
            if(node>2)
            {
                ans=(node*(node-1))/2;
                if(edge<ans)
                {
                    printf("NO\n");
                    return 0;
                }
                //cout<<edge<<" "<<ans<<" "<<node;
            }
            node=0;
            edge=0;
        }
    }

    printf("YES\n");
    return 0;
}
