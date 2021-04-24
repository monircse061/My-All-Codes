#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,ans;
   scanf("%d",&t);
   int x,y,z;
   while(t--){
    scanf("%d %d %d",&x,&y,&z);
    ans=(x*10)+(y*50)+(z*100);
    printf("%d\n",ans);
   }
   return 0;
}
