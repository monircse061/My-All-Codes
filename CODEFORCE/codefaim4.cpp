#include<bits/stdc++.h>
using namespace std;
int cont[1000000];
int main(){
   string s;
   int n,sum=0;
   cin>>s;
   scanf("%d",&n);
   if(s.length()!=n){
    printf("impossible");
   }
   else{
    for(int i=0;i<s.length();i++){
        cont[s[i]]++;
        if(cont[s[i]]>1){
            sum++;
        }
    }
    printf("%d",sum);
   }
   return 0;
}
