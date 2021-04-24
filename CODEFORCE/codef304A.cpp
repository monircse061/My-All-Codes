#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,k,w,cost,sum=0;
   scanf("%I64d %I64d %I64d",&n,&k,&w);
   for(int i=1;i<=w;i++){
    sum+=n*i;
   }
   cost=sum-k;
   if(cost<0){
    printf("0");
   }
   else{
    printf("%I64d",cost);
   }
   return 0;
}
