#include<bits/stdc++.h>
using namespace std;
int a[100009],b[100009],d[100009];
vector<int>v[100009];
void bfs(int l)
{
    a[l]=1;
    for(int i=0; i<v[l].size(); i++)
    {
        if(!a[v[l][i]])
        {
            b[l]++;
            //dfs(v[l][i]);
        }
    }
}
int main()
{
    int n,m,x,y,z,k,l,p,c;
    scanf("%d %d",&n,&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d",&x,&y);
        k=min(x,y);

        if(x>y)
        {
            c=x;
            x=y;
            y=c;
        }
        v[x].push_back(y);
        v[y].push_back(x);
    }
    //p=l;
    for(int i=1; i<=n; i++)
    {
        if(!a[i])
            bfs(i);
    }
    int cont=0;
    for(int i=1; i<=n; i++)
    {
        d[i]=1;
        for(int j=0; j<v[i].size(); j++)
        {
            int e=v[i][j];

            if((!d[e])&&b[e]>b[i])
                cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}
