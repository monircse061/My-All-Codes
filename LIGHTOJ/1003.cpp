#include<bits/stdc++.h>
using namespace std;
vector<int>v[10009];
map<string,int>m;
queue<int>q;
int degree[10009],cont=0;
void bfs(int num)
{
    for(int i=1; i<=num; i++)
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
        cont++;
        degree[edge]=-1;
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
    int t,n,num,j=0;
    string s1[10009],s2[10009];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        cont=0;
        num=0;
        for(int i=1; i<=n; i++)
        {
            cin>>s1[i]>>s2[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(m[s1[i]]==0)
            {
                num++;
                m[s1[i]]=num;
            }
            if(m[s2[i]]==0)
            {
                num++;
                m[s2[i]]=num;
            }
            v[m[s1[i]]].push_back(m[s2[i]]);
            //v[m[s1[i]].push_back(m[s2[i]]);
            degree[m[s2[i]]]++;
        }
        //cout<<num;
        bfs(num);
        j++;
        if(cont==num)
        {
            printf("Case %d: Yes\n",j);
        }
        else
        {
            printf("Case %d: No\n",j);
        }
        for(int i=1; i<=num; i++)
        {
            degree[i]=0;
            s1[i]="";
            s2[i]="";
            v[i].clear();
        }
        m.clear();
    }
    return 0;
}
