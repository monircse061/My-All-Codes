#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000],v1;
int degree[10000];
queue<int>q;
void bfs(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(!degree[i])
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int edge=q.front();
        q.pop();
        degree[edge]=-1;
        v1.push_back(edge);
        for(int i=0; i<v[edge].size(); i++)
        {
            degree[v[edge][i]]--;
            if(!degree[v[edge][i]])
            {
                q.push(v[edge][i]);
            }
        }
    }
}
int main()
{
    int n,m,x,y;

    while((scanf("%d %d",&n,&m)&&n!=0))
    {
        for(int i=1; i<=m; i++)
        {
            scanf("%d %d",&x,&y);
            v[x].push_back(y);
            degree[y]++;
        }
        //scanf("%d %d",&x,&y);
        bfs(n);
        for(int i=0; i<n; i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        v1.clear();
        for(int i=1; i<=n; i++)
        {
            v[i].clear();
            degree[i]=0;
        }
    }
    return 0;
}

