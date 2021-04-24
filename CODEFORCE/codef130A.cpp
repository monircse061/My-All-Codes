#include<bits/stdc++.h>
using namespace std;
string s2[100000];
int main(){
   string s,s1="";
   cin>>s;int l=0;
   for(int i=0;i<s.length();i++){
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
        i+=2;
        if(s1!=""){
            s2[l]=s1;
            l++;s1="";
        }
        continue;
    }
    else{
        s1+=s[i];
    }

     if(i==s.length()-1){
        s2[l]=s1;
    }

   }
   for(int i=0;i<=l;i++){
    if(s2[i]!=""){
        cout<<s2[i]<<" ";
    }
   }
   return 0;
}
