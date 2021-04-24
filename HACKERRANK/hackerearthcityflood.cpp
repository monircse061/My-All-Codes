#include<bits/stdc++.h>
using namespace std;
#define val 100009
int parent[val],cnt[val];
void insart(int n){
     for(int i=1;i<=n;i++){
        parent[i]=i;
     }
}
int parent1(int j){
     if(parent[j]!=j){
        return parent[j]=parent1(parent[j]);
     }
     else{return j;}
}
void find1(int u,int v){
     int px=parent1(u);
     int py=parent1(v);
     if(px==py){return;}
     if(px!=py){
        parent[py]=px;
     }
}
void print(int n){
    int j=0;
      for(int i=1;i<=n;i++){
        if(cnt[parent1(parent[i])]==0){
            j++;cnt[parent1(parent[i])]=1;
        }
      }
      printf("%d",j);
}
int main(){
    int n,k,u,v;
    scanf("%d %d",&n,&k);
    insart(n);
    for(int i=1;i<=k;i++){
        scanf("%d %d",&u,&v);
        find1(u,v);
    }
    print(n);
}
