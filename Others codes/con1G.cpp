#include<bits/stdc++.h>
using namespace std;
int main(){
   long long x,s,n,i;
   while(scanf("%lld",&n)!=EOF){
    if(n%2!=0)
        x=((n/2)+1)*-1;
    else
        x=n/2;
    printf("%lld\n",x);
   }
   return 0;
}
