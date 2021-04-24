#include<bits/stdc++.h>
using namespace std;
int cont[100];
int main(){
   int n,r,x;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        scanf("%d",&r);
    for(int i=1;i<=r;i++){
        scanf("%d",&x);
     cont[x]++;
    }
   }
   for(int i=1;i<=100;i++){
    if(cont[i]==n){
        printf("%d ",i);
    }
   }
   return 0;
}
