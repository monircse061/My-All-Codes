#include<bits/stdc++.h>
using namespace std;
int main(){
   double n,m,x,y,Min,ans;
   cin>>n>>m;
   cin>>x>>y;
   Min=(m*x)/y;
   for(int i=1;i<n;i++){
        cin>>x>>y;
   ans=((m*x)/y);
    if(Min>ans){
        Min=ans;
    }
   }
   printf("%.9lf\n",Min);
   return 0;
}
