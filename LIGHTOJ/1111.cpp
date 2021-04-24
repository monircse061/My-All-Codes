#include<bits/stdc++.h>
using namespace std;
#define val 100000
vector<int>a[10009];
int cont[val];
int vis[val],u,v,v2;
void visit(int n)
{
    for(int i=1; i<=n; i++)
    {
        cont[i]=0;
    }
    //u=0;
}
void v1(int n)
{
    for(int i=1; i<=n; i++)
    {
        vis[i]=0;
    }
}
void dfs(int n)
{
    vis[n]=1;
    cont[n]++;
    for(int i=0; i<a[n].size(); i++)
    {
        int e=a[n][i];
        if(!vis[e])
        {
            dfs(e);
        }
    }
}
int main()
{
    int k,n,m,x,y,ar[val],t,j=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&k,&n,&m);
        visit(n);
        for(int i=0; i<k; i++)
        {
            cin>>ar[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>x>>y;
            a[x].push_back(y);
        }
        for(int i=0; i<k; i++)
        {
            v1(n);
            dfs(ar[i]);
        }
        int p=cont[0];
        for(int i=1; i<k; i++)
        {
            if(p>cont[i])
            {
                p=cont[i];
            }
        }
        j++;
        p=0;
        for(int i=1; i<=n; i++)
        {
            if(cont[i]>=k)
                p++;
        }
        cout<<"Case "<<j<<":" <<p<<endl;
        for(int i=1; i<=n; i++)
        {
            a[i].clear();
        }
    }
    return 0;
}
