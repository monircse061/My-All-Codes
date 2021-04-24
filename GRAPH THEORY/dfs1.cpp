#include<bits/stdc++.h>
using namespace std;
vector<int>a[10000];
int v[100];int c=0;
void dfs(int n){
     v[n]=1;
     for(int i=0;i<a[n].size();i++){
        int b=a[n][i];
        if(!v[b]){
            cout<<n<<" "<<b<<endl;
            dfs(b);
        }
     }
}
int main(){
   int n,e,x,y,s;
   scanf("%d %d",&n,&e);
   for(int i=0;i<e;i++){
        cin>>x>>y;
        if(i==0){s=x;}
    a[x].push_back(y);
   a[y].push_back(x);
   }
   for(int i=s;i<n;i++){
       if(!v[i]){
        c++;
        dfs(i);
       }
   }
   //cout<<c;
   ///cout<<v[1];
   return 0;
}
/*****************dfs*****************
#include<bits/stdc++.h>

using namespace std;
#define M 100000
vector<int>ve[M];
vector<bool>vis;

void dfs(int n){
    vis[n]=true;
    for(int i=0;i<ve[i].size();i++){
        int e=ve[n][i];
        if(!vis[e])
            dfs(e);
    }
}
int main()
{
    int n,e,i,j,x,y;
    cin>>n>>e;

    for(i=0;i<e;i++){
        cin>>x>>y;
        ve[x].push_back(y);
        ve[y].push_back(x);
    }
    int c=0;
    for(int i=1;i<=e;i++){
        if(!vis[i]){
            c++;
            dfs(i);
        }
    }
    cout<<c<<endl;
    return 0;
}************************************/
