#include<bits/stdc++.h>
using namespace std;
int main(){
   double ab,ac,bc,Ratio,t;int j=0;
   cin>>t;
   while(t--){
   cin>>ab>>ac>>bc>>Ratio;
   j++;
   printf("Case %d: %.9lf\n",j,ab*(sqrt(Ratio)/sqrt(Ratio+1)));
   }
   return 0;
}
