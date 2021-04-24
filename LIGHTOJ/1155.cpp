#include<bits/stdc++.h>
using namespace std;
vector<int>vec[1000];
int capacity[1000][1000],ar[105],start[109],End[109],br,dr,flow_res=0,par[1000];
bool visit[1000];
int bfs(int node,int source,int sink)
{
    for(int i=1; i<=node*2+1; i++)
    {
        par[i]=0;
        visit[i]=false;
        visit[400]=false;
        visit[500]=false;
        par[400]=0,par[500]=0;
    }
    queue<int>q;
    q.push(source);
    visit[source]=true;
    while(!q.empty())
    {
        int u=q.front();
        //cout<<u<<" ";
        q.pop();
        if(u==sink)
        {
            return true;
        }
        for(int i=0; i<vec[u].size(); i++)
        {
            int adj=vec[u][i];
            if(!visit[adj]&&capacity[u][adj]>0)
            {
                visit[adj]=true;//cout<<u<<" "<<adj<<" "<<capacity[u][adj]<<endl;
                q.push(adj);
                par[adj]=u;
            }
        }
    }
    return false;
}
int maxflow(int node,int source,int sink)
{
    int v,u,flow;
    while(bfs(node,source,sink))
    {
        v=sink;
        flow=INT_MAX;
        while(par[v])
        {
            u=par[v];
            flow=min(flow,capacity[u][v]);
            v=u;
        }
        v=sink;
        flow_res+=flow;
        while(par[v])
        {
            u=par[v];
            capacity[u][v]-=flow;
            capacity[v][u]+=flow;
            v=u;
        }
    }
    return flow_res;
}
int main()
{
    int t,n,node,x,y,z,source,sink,b,d,Case=0;
    scanf("%d",&t);
    while(t--)
    {
        source=400;
        flow_res=0;
        sink=500;
        scanf("%d",&node);
        for(int i=1; i<=node; i++)
        {
            scanf("%d",&ar[i]);
        }
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            vec[(2*x)+1].push_back(2*y);
            vec[2*y].push_back((2*x)+1);
            vec[2*y].push_back((2*y)+1);
            vec[(2*y)+1].push_back(2*y);
            capacity[(2*x)+1][2*y]=z;
            capacity[2*y][(2*y)+1]=ar[y];
            //cout<<2*x+1<<" "<<2*y<<" "<<2*y<<" "<<2*y+1<<endl;
        }
        scanf("%d %d",&b,&d);
        for(int i=1; i<=b; i++)
        {
            scanf("%d",&br);
            vec[source].push_back(br*2);
            vec[br*2].push_back(source);
            vec[br*2].push_back(br*2+1);
            vec[br*2+1].push_back(br*2);
            capacity[source][br*2]=10000;
            capacity[br*2][br*2+1]=ar[br];
        }
        for(int i=1; i<=d; i++)
        {
            scanf("%d",&dr);
            vec[dr*2+1].push_back(sink);
            vec[sink].push_back(dr*2+1);
            capacity[dr*2+1][sink]=10000;
        }//cout<<capacity[2][3]<<" "<<capacity[3][4]<<" "<<capacity[4][5]<<" "<<capacity[5][6]
        //<<capacity[6][7];
        Case++;
        printf("Case %d: %d\n",Case,maxflow(node,400,500));
        for(int i=1; i<=205; i++)
        {
            vec[i].clear();
            capacity[400][i]=0;
            capacity[500][i]=0;
            capacity[i][400]=0;
            capacity[i][500]=0;
            for(int j=1; j<=205; j++)
            {
                capacity[i][j]=0;
            }
        }
    }
    return 0;
}
