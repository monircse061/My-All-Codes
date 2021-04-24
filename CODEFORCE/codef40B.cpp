#include<bits/stdc++.h>
using namespace std;
int main(){
   string s,s1="",s2="";int n;
   cin>>n;
   cin>>s;
   for(int i=n/2;i>0;i--){
        int l=i;
    for(int j=0;j<i;j++){
        s1=s1+s[j];
        s2=s2+s[l];
        l++;
    }
    if(s1==s2){
        cout<<n-i+1<<endl;
        return 0;
    }
    s1="";s2="";
   }
   cout<<n<<endl;
   return 0;
}
