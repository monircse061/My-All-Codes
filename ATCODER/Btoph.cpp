#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m,ar[10009],sum=0;
   scanf("%d %d",&n,&m);
   for(int i=1;i<=n;i++){
    scanf("%d",&ar[i]);
   }
   for(int i=1;i<=n;i++){
    if(ar[i]<m){
        printf("NO\n");
        return 0;
    }
    sum+=m;
    if(sum>60){
        printf("NO\n");
        return 0;
    }
   }
   printf("YES\n");
   return 0;
}
