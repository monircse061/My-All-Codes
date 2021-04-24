#include<bits/stdc++.h>
using namespace std;
int a[100000];
vector<int>v[10000];
int n,m,z=0,vis[100000],sum[100000];
  string s;int cont=0,index;
void dfs(int n){
    vis[n]=1;
    for(int i=0;i<v[n].size();i++){
        int e=v[n][i];
        if(!vis[e]){
            sum[e]=sum[n]+1;
            if(e!=index)
            {dfs(e);}
            if(z<sum[index]){
                z=sum[index];
            }
        }
    }
}
int main(){

cin>>n>>m;
  cin>>s;int x,y;
  for(int i=0;i<s.length();i++){
        int l=s[i]-64;
        a[l]++;
        if(cont<a[l]){
            cont=a[l];
            index=i+1;
        }
  }
  for(int i=1;i<=m;i++){
    cin>>x>>y;
    v[x].push_back(y);
  }
  if(cont!=1){
  for(int i=1;i<=n;i++){
        if(i!=index){
    if(!vis[i]){
        dfs(i);
    }}
  } cout<<z<<endl;
  }
  else{
    cout<<-1<<endl;
  }

  return 0;
}
