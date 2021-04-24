#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<string>v;
   vector<string>v1;
   string s,s1;
   int n,m,x,y;
   scanf("%d %d",&n,&m);
   for(int i=1;i<=n+m;i++){
    cin>>s1;
   v1.push_back(s1);
    cin>>s;
    v.push_back(s);
   }
   for(int j=n;j<m+n;j++){
    for(int i=0;i<n;i++){
        if(v[i]+";"==v[j]){
            cout<<v1[j]<<" "<<v[j]<<" "<<"#"<<v1[i]<<endl;
        }
    }
   }
}
