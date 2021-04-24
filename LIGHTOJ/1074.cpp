#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll par[100009],dis[100009],a[100009];
vector< pair <ll,ll>  >v[100009];
void fun(ll n)
{
    for(int i=1; i<=n; i++)
    {
        dis[i]=0;
        par[i]=0;
        a[i]=0;
    }
}
void bellman_ford(ll s,ll n)
{
    for(int i=1; i<=n; i++)
    {
        dis[i]=1e17;
    }
    dis[s]=0;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            for(int i1=0; i1<v[j].size(); i1++)
            {
                ll ver=v[j][i1].second;
                ll w=v[j][i1].first;
//cout<<j<<"->"<<dis[1]<<" "<<dis[2]<<" "<<dis[3]<<" "<<dis[4]<<endl;
                if(dis[ver]>dis[j]+w)
                {
                    dis[ver]=dis[j]+w;
                    //cout<<ver<<" "<<dis[ver]<<" ";
                    par[ver]=j;
                }
            }
        }
    }
}
ll path(ll u,ll v)
{
    if(v==1)
    {//cout<<v<<" "<<"//"<<endl;
        return 0;
    }
    if(par[v])
    {
        path(u,par[v]);
    }
    else
    {
        return 1;
    }
}
int main()
{
    ll n,m,x,y,w,s,num,d,j=0,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
        }
        scanf("%lld",&m);
        for(int i=1; i<=m; i++)
        {
            scanf("%lld %lld",&x,&y);
            ll w1=(a[y]-a[x]);
            w=w1*w1*w1;

            v[x].push_back(make_pair(w,y));
        }
        scanf("%lld",&num);
        j++;
        printf("Case %lld:\n",j);
        bellman_ford(1,n);
        while(num--)
        {
            scanf("%lld",&d);
            //cout<<d<<" "<<dis[d]<<endl;
            //int index=path(1,d);
            //cout<<index<<" "<<"///"<<endl;
            if(dis[d]<3||dis[d]>=1e17)
            {
                printf("?\n");
            }

            else if(path(1,d))
            {
                //cout<<"////"<<" ";
                printf("?\n");
            }
            else
            {
                printf("%lld\n",dis[d]);
            }
        }
        for(int j=1;j<=200;j++)
        for(int i=0;i<v[j].size();i++){
            v[j][i].first=0;
            v[j][i].second=0;
        }
        //cout<<v[1][0].first<<"----"<<v[1][1].first;
        fun(n);
    }
    return 0;
}

