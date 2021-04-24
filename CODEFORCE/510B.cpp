#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000];
bool visit[10000];
int parent[10000],x=1,cont;
void fun(int n,int m)
{
    for(int i=1; i<=n*m+1; i++)
    {
        parent[i]=i;
        visit[i]=false;
    }
}
void dfs(int n)
{
    visit[n]=true;
    for(int i=0; i<v[n].size(); i++)
    {
        int b=v[n][i];
        if(visit[b]==true&&parent[n]!=b&&cont>=4)
        {
            x=0;//cout<<n<<" "<<parent[n]<<" "<<" "<<b<<" "<<cont<<endl;
            //return ;
        }
        else if(!visit[b])
        {
            parent[b]=n;
            cont++;//cout<<n<<" "<<parent[n]<<" "<<" "<<b<<" "<<cont<<endl;
            //cout<<n<<" "<<v[n][i]<<endl;
            dfs(b);
        }
        ///else{break;}
    }
}
int main()
{
    int n,m,node=0;
    char s[1000][1000];
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%s",s[i]);
    }
    fun(n,m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            node++;
            if(j<m-1)
            {
                if(s[i][j+1]==s[i][j])
                {
                    v[node].push_back(node+1);
                    //cout<<node<<" "<<node+1<<endl;
                    //v[node+1].push_back(node);
                }
            }
            if(j>0)
            {
                if(s[i][j]==s[i][j-1])
                {
                    v[node].push_back(node-1);
                    //cout<<node<<" "<<node-1<<endl;
                    //v[node-1].push_back(node);
                }
            }
            if(i>0)
            {
                if(s[i][j]==s[i-1][j])
                {
                    v[node].push_back(node-m);
                    //cout<<node<<" "<<node-m<<endl;
                    //v[node-m].push_back(node);
                }
            }
            if(i<n-1)
            {
                if(s[i][j]==s[i+1][j])
                {
                    v[node].push_back(node+m);
                    //cout<<node<<" "<<node+m<<endl;
                    //v[node+m].push_back(node);
                }
            }
        }
    }
    for(int i=1; i<=n*m; i++)
    {
        if(!visit[i])
        {
            cont=1;
            dfs(i);
            if(x==0)
            {
                printf("Yes");
                return 0;
            }
            fun(n,m);
        }
    }
    printf("No");
    return 0;
}
