#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >vertex[1000];
bool visit[1000];
int dis[1000];
void dijkstras(int u)
{
    priority_queue< pair<int,int>,vector<pair<int,int> >,greater< pair<int,int> > > pq;
    dis[u]=0;
    pq.push(make_pair(0,u));
    while(!pq.empty())
    {
        u=pq.top().second;
        pq.pop();
        visit[u]=true;
        for(int i=0; i<vertex[u].size(); i++)
        {
            int w=vertex[u][i].first;
            int v=vertex[u][i].second;
            if(dis[v]>dis[u]+w)
            {
                dis[v]=dis[u]+w;
                if(!visit[v])
                {
                    pq.push(make_pair(dis[v],v));
                }
            }
        }
    }
}
int main()
{
    int n,x,num,res=0;
    string ch;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i-1; j++)
        {
            cin>>ch;
            num=0;
            x=1;
            if(ch=="x")
            {
                continue;
            }
            else
            {
                for(int i=0; i<ch.length(); i++)
                {
                    num=num*x+(ch[i]-48);
                    x*=10;
                }
            }
            //cout<<num<<" ";
            vertex[i].push_back(make_pair(num,j));
            vertex[j].push_back(make_pair(num,i));

        }
    }
    for(int i=1; i<=n; i++)
    {
        dis[i]=INT_MAX;
    }
    dijkstras(1);
    for(int i=1; i<=n; i++)
    {
        if(res<dis[i])
        {
            res=dis[i];
        }
    }
    printf("%d\n",res);
    return 0;
}
