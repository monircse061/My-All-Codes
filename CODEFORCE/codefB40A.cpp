#include<bits/stdc++.h>
using namespace std;
int main(){
     string s,s1,s2;
     cin>>s>>s1;
     for(int i=s.length()-1;i>=0;i--){
        s2+=s[i];
     }
     if(s1==s2){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
     return 0;
}
