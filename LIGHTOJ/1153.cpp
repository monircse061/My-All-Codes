#include<bits/stdc++.h>
using namespace std;
vector<int>vec[1000];
bool visit[1000];
int capacity[1000][1000],par[1000],Final_res=0;
int bfs(int source,int sink,int node)
{
    for(int i=1; i<=node; i++)
    {
        visit[i]=false;
        par[i]=0;
    }
    queue<int>q;
    q.push(source);
    visit[source]=true;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(u==sink)
        {
            return true;
        }
        for(int i=0; i<vec[u].size(); i++)
        {
            int v=vec[u][i];
            if(!visit[v]&&capacity[u][v]>0)
            {
                q.push(v);
                visit[v]=true;
                par[v]=u;
            }
        }
    }
    return false;
}
int maxflow(int source,int sink,int node)
{
    int u,v,flow;
    while(bfs(source,sink,node))
    {
        flow=INT_MAX;
        v=sink;
        while(par[v])
        {
            u=par[v];
            flow=min(flow,capacity[u][v]);
            v=u;
        }
        v=sink;
        Final_res+=flow;
        while(par[v])
        {
            u=par[v];
            capacity[u][v]-=flow;
            capacity[v][u]+=flow;
            v=u;
        }
    }
    return Final_res;
}
int main()
{
    int source,sink,edge,node,x,y,z,t,Case=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&node,&source,&sink,&edge);
        for(int i=1; i<=edge; i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            vec[x].push_back(y);
            vec[y].push_back(x);
            capacity[x][y]+=z;
            capacity[y][x]+=z;
        }
        Case++;
        printf("Case %d: %d\n",Case,maxflow(source,sink,node));
        Final_res=0;
        for(int i=1;i<=node;i++){
                par[i]=0;vec[i].clear();
            for(int j=1;j<=node;j++){
                capacity[i][j]=0;

            }
        }
    }
    return 0;
}
