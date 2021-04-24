#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000],v1[10000];
int parent[10000];
bool visit[10000];
void dfs(int n)
{
    visit[n]=true;
    for(int i=0; i<v1[n].size(); i++)
    {
        int b=v1[n][i];
        if(!visit[b])
        {
            //cout<<n<<" "<<b<<endl;
            dfs(b);
        }
    }
}
void fun(int n)
{
    for(int i=1; i<=n; i++)
    {
        parent[i]=i;
    }
}
int unionall(int j)
{
    if(parent[j]!=j)
    {
        return parent[j]=unionall(parent[j]);
    }
    else
    {
        return j;
    }
}
void ranknum(int p,int l)
{
    int px=unionall(p);
    int py=unionall(l);
    if(px==py)
    {
        return;
    }
    //cont[parent[px]]=cont[parent[px]]+cont[parent[py]];
    // cout<<cont[parent[px]];
    if(px!=py)
    {
        v1[px].push_back(py);
        v1[py].push_back(px);
        //cout<<px<<" "<<py<<endl;
        parent[py]=px;
    }
}
int main()
{
    int n,m,c,l,cont=0,zero=0;
    scanf("%d %d",&n,&m);
    fun(n);
    for(int i=1; i<=n; i++ )
    {
        cin>>c;
        if(c==0)zero++;
        for(int j=1; j<=c; j++)
        {
            cin>>l;
            v[l].push_back(i);
        }
    }
    for(int i=1; i<=m; i++)
    {
        if(v[i].size()>1)
            for(int j=0; j<v[i].size()-1; j++)
            {
                ranknum(v[i][j],v[i][j+1]);
            }
    }
    for(int i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            dfs(i);
            cont++;
        }
    }
    if(zero==n)
    {
        printf("%d",cont);
    }
    else
    {
        printf("%d",cont-1);
    }
    return 0;
}
