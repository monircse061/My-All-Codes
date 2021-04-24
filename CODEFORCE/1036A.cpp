#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll n,k,ans,d=0;
   scanf("%I64d %I64d",&n,&k);
   if(k<=n){
    printf("1");
   }
   else if(k%n==0){
        printf("%I64d",k/n);
   }
   else{
    printf("%I64d",k/n+1);
   }
   return 0;
}
