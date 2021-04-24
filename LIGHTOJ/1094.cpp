#include<bits/stdc++.h>
using namespace std;
vector<int>a[100009];
vector<int>b[100009];
int vis[100000];
int cont[100000];
void visit(int n)
{
    for(int i=0; i<n; i++)
    {
        cont[i]=0;
        vis[i]=0;
    }
}
void dfs(int n)
{
    vis[n]=1;
    for(int i=0; i<a[n].size(); i++)
    {
        int e=a[n][i];
        if(!vis[e])
        {
            cont[e]=cont[n]+b[n][i];
            dfs(e);
        }
    }
}
int main()
{
    int n,m,z,x,y,t,x1,j=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        visit(n);
        for(int i=1; i<n; i++)
        {
            cin>>x>>y>>z;
            a[x].push_back(y);
            b[x].push_back(z);
            a[y].push_back(x);
            b[y].push_back(z);
        }
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }
        x1=cont[0];
        int l=0;
        for(int i=1; i<n; i++)
        {
            if(x1<cont[i])
            {
                l=i;
                x1=cont[i];
            }
        }
        int c=l;
        visit(n);
        dfs(c);
        int d=cont[0];
        for(int i=1; i<n; i++)
        {
            if(d<cont[i])
            {
                d=cont[i];
            }
        }
        j++;
        cout<<"Case "<<j<<": "<<d<<endl;
        for(int i=0; i<n; i++)
        {
            a[i].clear();
            b[i].clear();
        }
    }
    return 0;
}
