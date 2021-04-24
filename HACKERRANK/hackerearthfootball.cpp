#include<bits/stdc++.h>
#include<stack>
using namespace std;
#define val 10000
stack<int>m;
int main(){
     int n,n1,k,i,j;
     char s;
     scanf("%d %d",&n,&n1);
     m.push(n1);
     for(int i=0;i<n;i++){
       cin>>s;
        if(s=='B'){
            int f=m.top();
            m.pop();
            int s=m.top();
            m.pop();
            m.push(f);
            m.push(s);

        }
          else{ cin>>n1;
           m.push(n1);}
     }
     cout<<m.top();
     return 0;
 }
