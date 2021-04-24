#include<bits/stdc++.h>
using namespace std;
long long x,y,A,B,C;
int main(){
   while(scanf("%lld%lld%lld",&A,&B,&C)!=EOF){
    if((A*A)+(B*B)<=0)
       continue;
    x=A*C;
    y=(((-A*x)-C)/B);
    printf("%lld %lld\n",x,y);
   }
   return 0;
}
