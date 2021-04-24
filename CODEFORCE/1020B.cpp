#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int cont[100009],vis[100009];
void fun(int n)
{
    for(int i=1; i<=n; i++)
    {
        vis[i]=0;
        cont[i]=0;
    }
}
void dfs(int n)
{
    vis[n]=1;
    for(int i=0; i<v[n].size(); i++)
    {
        int e=v[n][i];
        cont[e]++;
        //cout<<e<<" ";
        if(cont[e]==2)
        {
            printf("%d ",e);
        }
        if(!vis[e])
            dfs(e);
    }
}
int main()
{
    int n,a[100009];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        v[i].push_back(a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        cont[i]++;
        dfs(i);
        fun(n);
    }
    return 0;
}
