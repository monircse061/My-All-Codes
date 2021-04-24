#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   scanf("%d",&n);
   for(int i=2;i*i<=n;i++){
    while(n%i==0){
        n=n/i;
        print("%d ",i);
    }
   }
   return 0;
}
