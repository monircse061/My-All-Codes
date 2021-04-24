#include<bits/stdc++.h>
using namespace std;
vector<int>v[1009];
int visit[1000];
void dfs(int n){
    visit[n]=1;
    for(int i=0;i<v[n].size();i++){
        int edge=v[n][i];
        if(!visit[edge]){
            dfs(edge);
        }
    }
}
int main(){
   int n,a[1009],b[1009],cont=-1;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    scanf("%d %d",&a[i],&b[i]);
   }
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==j)
            continue;
        if(a[i]==a[j]||b[i]==b[j]){
            v[i].push_back(j);
            v[j].push_back(i);
        }
    }
   }
   for(int i=1;i<=n;i++){
    if(!visit[i]){
        dfs(i);
        cont++;
    }
   }
   printf("%d",cont);
   return 0;
}
