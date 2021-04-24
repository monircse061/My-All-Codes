#include<bits/stdc++.h>
using namespace std;
int main(){
   string s1,s;
   int a[100],n,x,y,t;
   cin>>t;
   while(t--){
   cin>>n;x=0;
   for(int i=0;i<n;i++){
      cin>>s1;
      cin>>a[i];
      if(x<a[i]){
        s=s1;
        x=a[i];
      }
   }
   cout<<"Winner: \\"<<s<<"/"<<endl;
   s="";
   }
   return 0;
}
