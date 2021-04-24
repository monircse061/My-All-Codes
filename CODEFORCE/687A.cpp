#include<bits/stdc++.h>
using namespace std;
int cont[100099],l=0,l1=0,a[100099],b[100099],ck=1;
vector<int>v[100099];
queue<int>q;
bool visit[100099];
int bfs(int u)
{
    q.push(u);
    cont[u]=1;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        visit[u]=true;
        for(int i=0; i<v[u].size(); i++)
        {
            if(!visit[v[u][i]])
            {
                q.push(v[u][i]);
                if(cont[u]==1&&cont[v[u][i]]==0)
                {
                    cont[v[u][i]]=2;
                }
                else if(cont[v[u][i]]==0)
                {
                    cont[v[u][i]]=1;
                }
            }
            else if(visit[v[u][i]]&&cont[u]==cont[v[u][i]])
            {
                printf("-1");
                ck=0;
                break;
            }
        }
        if(ck==0)break;
    }
}
int main()
{
    int n,m,x,y,s;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            if(v[i].empty())
            {
                continue;
            }
            bfs(i);
            if(ck==0)break;
        }
    }
    if(ck==1)
    {
        for(int i=1; i<=n; i++)
        {
            if(cont[i]==1)
            {
                l++;
            }
            else if(cont[i]==2)
            {
                l1++;
            }
        }
        cout<<l<<endl;
        for(int i=1; i<=n; i++)
        {
            if(cont[i]==1)
            {
                printf("%d ",i);
            }
        }
        cout<<endl<<l1<<endl;
        for(int i=1; i<=n; i++)
        {
            if(cont[i]==2)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}
