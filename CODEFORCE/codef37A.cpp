#include<bits/stdc++.h>
using namespace std;
int visit[10000];
vector<int>v[1000];
int cont[100000];
queue<int>q;
void vis(int n)
{
    for(int i=1; i<=n; i++)
    {
        visit[i]=0;
        cont[i]=0;
    }
}
void bfs()
{
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0; i<v[x].size(); i++)
        {
            int e=v[x][i];
            if(!visit[e])
            {
                cont[e]=cont[x]+1;
                visit[e]=1;
                q.push(e);
            }
        }
    }
}
int main()
{
    int n,m,a[10000],y,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        y=0;
        vis(n);
        for(int i=0; i<m; i++)
        {
            scanf("%d",&a[i]);
            visit[a[i]]=1;
            q.push(a[i]);
        }
        for(int i=1; i<n; i++)
        {
            v[i].push_back(i+1);
            v[i+1].push_back(i);
        }
        bfs();
        for(int i=1; i<=n; i++)
        {
            if(y<cont[i])
            {
                y=cont[i];
            }
        }
        cout<<y+1<<endl;
        for(int i=1; i<=n; i++)
        {
            v[i].clear();
        }
    }
    return 0;
}
