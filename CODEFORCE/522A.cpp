#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
bool visit[10000];
int cont[10000];
map<string,int>m;
void dfs(int n){
    visit[n]=true;
    for(int i=0;i<v[n].size();i++){
        if(!visit[v[n][i]]){
            cont[v[n][i]]=cont[n]+1;
            //cout<<cont[v[n][i]]<<" "<<cont[n]<<endl;
            dfs(v[n][i]);
        }
    }
}
int main(){
    string s1[10000],s2[10000],s3,s4,s;
   int n,num=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    cin>>s1[i]>>s>>s2[i];
   }
   for(int i=1;i<=n;i++){
        s3=s1[i];s4=s2[i];
    for(int j=0;j<s3.length();j++){
        if(s3[j]>='A'&&s3[j]<='Z'){
            s3[j]+=32;
        }
    }
    for(int j=0;j<s4.length();j++){
        if(s4[j]>='A'&&s4[j]<='Z'){
            s4[j]+=32;
        }
    }
    if(m[s4]==0){
            num++;
       m[s4]=num;
    }
    if(m[s3]==0){
        num++;
    m[s3]=num;
    }
    v[m[s3]].push_back(m[s4]);
    v[m[s4]].push_back(m[s3]);
    //cout<<m[s3]<<" "<<m[s4]<<endl;
   }
   dfs(1);
   sort(cont+1,cont+num+1);
   cout<<cont[num]+1;
    return 0;
}
