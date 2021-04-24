#include<bits/stdc++.h>
using namespace std;
int vis[10000],arr[10000];
int n,p[100000],m,x,y,l,s,z,t,cont;
vector<int>v1[10000];
vector<int>v2[10000];
void visit(int n)
{
    for(int i=0; i<n; i++)
    {
        vis[i]=0;
        arr[i]=0;
    }
    s=0;
}
void parent(int n)
{
    for(int i=0; i<n; i++)
    {
        p[i]=i;
    }
}
struct abc
{
    int u,v,w;
} ;
abc e[1000];
int rcheck(int a)
{
    if(p[a]!=a)
    {
        return p[a]=rcheck(p[a]);
    }
    else
    {
        return a;
    }
}
bool compare(abc a,abc b)
{
    return a.w<b.w;
}
void fun(int n)
{
    sort(e,e+n,compare);
    for(int i=0; i<n; i++)
    {
        int px=rcheck(e[i].u);
        int py=rcheck(e[i].v);
        if(px!=py)
        {
            p[py]=px;
            v2[px].push_back(py);
            v2[py].push_back(px);
            v1[px].push_back(e[i].w);
            v1[py].push_back(e[i].w);
        }
    }
}
void  dfs(int n)
{
    vis[n]=1;
    for(int i=0; i<v2[n].size(); i++)
    {
        int e=v2[n][i];
        if(!vis[e])
        {
            if(s<v1[n][i])
            {
                s=v1[n][i];
            }
            arr[e]=s;
            dfs(e);
        }
    }
}
int main()
{
    int test,c=1;
    cin>>test;
    while(test--)
    {
        scanf("%d",&n);
        scanf("%d",&m);
        visit(n);
        parent(n);
        for(int i=0; i<m; i++)
        {
            cin>>x>>y>>z;
            e[i].u=x;
            e[i].v=y;
            e[i].w=z;
        }
        cin>>t;
        fun(m);
        dfs(t);
        cout<<"Case "<<c<<":"<<endl;
        c++;
        for(int i=0; i<n; i++)
        {
            if(t!=i&&arr[i]==0)
            {
                cout<<"Impossible"<<endl;
            }
            else
            {
                cout<<arr[i]<<endl;
            }

        }
        for(int i=0; i<n; i++)
        {
            v1[i].clear();
            v2[i].clear();
        }
    }
    return 0;
}
