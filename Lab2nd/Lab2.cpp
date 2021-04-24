#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >a[1000];
int dis[10000],par[10000],vis[10000];
//#define Max INT_MAX;
void fun(int n)
{
    for(int i=0; i<=n; i++)
    {
        dis[i]=0;
        vis[i]=0;
        par[i]=0;
    }
}
void dijkstra(int n)
{
    priority_queue< pair<int,int>,vector<pair<int,int> >,greater< pair<int,int> > > pq;
    dis[n]=0;
    pq.push(make_pair(0,n));
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        vis[u]=1;
        for(int i=0; i<a[u].size(); i++)
        {
            int w=a[u][i].first;
            int v=a[u][i].second;
            if(dis[v]>dis[u]+w)
            {
                dis[v]=dis[u]+w;
                par[v]=u;
                if(!vis[v])
                {
                    pq.push(make_pair(dis[v],v));
                }
            }
        }
    }
}
int main()
{
    int n,m,x,y,w; double x1=-1;int num;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d %d %d",&x,&y,&w);
        a[x].push_back(make_pair(w,y));
        //a[y].push_back(make_pair(w,x));
    }
    for(int i=0; i<n; i++)
    {
        fun(n);
        int num1=i;
        for(int i=0; i<n; i++)
        {
            dis[i]=1000000;
        }
        dijkstra(num1);
         int sum=0;
        for(int j=0; j<n; j++)
        {
            sum+=dis[j];
        }
        double sum2=1.0/(double)sum;
        cout<<num1<<" "<<sum<<endl;
        if(x1<sum2){
                x1=sum2;
            num=num1;
        }
    }
    cout<<"Ans:"<<endl;
   printf("%d",num);
   return 0;

}

/********************
#include<bits/stdc++.h>
using namespace std;
int main(){
   int r,c;char s[1000][1000];
   scanf("%d %d",&r,&c);
   for(int i=0;i<r;i++){
    scanf("%s",s[i]);
   }
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(s[i][j]=='.'){
            if((s[i+1][j]=='B'&&i+1<r)||(s[i-1][j]=='B'&&i-1>=0)||(
               s[i][j+1]=='B'&&j+1<c)||(s[i][j-1]=='B'&&j-1>=0)){
                s[i][j]='W';
            }
            else //if(i+1<r)
                {
                s[i][j]='B';
            }
             /**if(s[i-1][j]=='B'&&i-1>=0){
                s[i][j]='W';
             }
             else //if(i-1>=0)
             {
                s[i][j]='B';
             }
             if(s[i][j+1]=='B'&&j+1<c){
                s[i][j]='W';
             }
             else //if(j+1<c)
             {
                s[i][j]='B';
             }
             if(s[i][j-1]=='B'&&j-1>=0){
                s[i][j]='W';
             }
             else //if(j-1>=0)
             {
                s[i][j]='B';
             }**/
        }
    }
   }
   for(int i=0;i<r;i++){
    printf("%s\n",s[i]);
   }
   return 0;
}
