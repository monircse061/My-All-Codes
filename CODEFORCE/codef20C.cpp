#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,int> >v[100001];
int par[100001];
stack<int>s;
bool vis[100001];
long long int dis[100001];

void fun(int n)
{
    for(int i=1; i<=n; i++)
    {
        par[i]=i;
    }
}
void dijkstra(int u,int n)
{
    priority_queue<pair<ll,int>,vector<pair<ll,int> >,greater<pair<ll,int> > >pq;
    dis[u]=0;
    pq.push(make_pair(0,u));
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        vis[u]=1;
        for(int i=0; i<v[u].size(); i++)
        {
            int e=v[u][i].second;
            long long int w=v[u][i].first;
            if(dis[e]>dis[u]+w)
            {
                par[e]=u;
                dis[e]=dis[u]+w;
                if(!vis[e])
                {
                    pq.push(make_pair(dis[e],e));
                }
            }
        }
    }
}
int main()
{
    int n,m,x,y,z;
    scanf("%d %d",&n,&m);
    fun(n);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        v[x].push_back(make_pair(z,y));
        v[y].push_back(make_pair(z,x));
    }
    for(int i=1; i<=n; i++)
    {
        dis[i]=1e18;
    }
    dijkstra(1,n);

    if(dis[n]==1e18)
    {
        cout<<-1<<endl;
    }
    else
    {
        int i=n;
        while(i>1)
        {
            s.push(i);
            int a=i;
            i=par[a];
        }
        cout<<1<<" ";
        while(!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
    }
    return 0;

}
