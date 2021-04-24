#include<bits/stdc++.h>
using namespace std;
vector<int>a[10000];
queue<int>q;
queue<int>q1;
int visit[10000],cont[10000],cont1[10000];
int n,m,x,y,f,l,j=0,t;
void v1(int n)
{
    for(int i=0; i<n; i++)
    {
        cont[i]=0;
        cont1[i]=0;
    }
}
void v(int n)
{
    for(int i=0; i<n; i++)
    {
        visit[i]=0;
    }
}
void bfs(int n)
{
    q.push(n);
    visit[n]=1;
    while(!q.empty())
    {
        n=q.front();
        q.pop();

        for(int i=0; i<a[n].size(); i++)
        {
            int e=a[n][i];
            if(!visit[e])
            {
                visit[e]=1;
                cont[e]=cont[n]+1;
                q.push(e);
            }
        }
    }
}
void bfs1(int n)
{
    visit[n]=1;
    q1.push(n);
    visit[n]=1;
    while(!q1.empty())
    {
        n=q1.front();
        q1.pop();
        for(int i=0; i<a[n].size(); i++)
        {
            int e=a[n][i];
            if(!visit[e])
            {
                visit[e]=1;
                cont1[e]=cont1[n]+1;
                q1.push(e);
            }
        }
    }
}
int main()
{

    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        v(n);
        v1(n);
        for(int i=0; i<m; i++)
        {
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cin>>f>>l;
        bfs(f);
        v(n);
        bfs1(l);
        int x=0;
        j++;
        for(int i=0; i<n; i++)
        {
            if(x<cont[i]+cont1[i])
            {
                x=cont[i]+cont1[i];
            }
        }
        cout<<"Case "<<j<<": "<<x<<endl;
        for(int i=0; i<10000; i++)
        {
            a[i].clear();
        }
    }
    return 0;
}
