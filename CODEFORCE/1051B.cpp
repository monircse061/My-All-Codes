#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
   ll n,m;
   scanf("%I64d %I64d",&n,&m);
   printf("YES\n");
   for(ll i=n;i<m;i+=2){
    printf("%I64d %I64d\n",i,i+1);
   }
   return 0;
}
