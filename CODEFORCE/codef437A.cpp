#include<bits/stdc++.h>
using namespace std;
int main(){
   string st;
   int n,s=0,f=0;
   scanf("%d",&n);
   cin>>st;
   for(int i=0;i<st.length()-1;i++){
    if(st[i]=='S'&&st[i+1]=='F'){
        s++;
    }
    else if(st[i]=='F'&&st[i+1]=='S'){
        f++;
    }
   }
   if(s>f){
    printf("YES");
   }
   else{
    printf("NO");
   }
   return 0;
}
