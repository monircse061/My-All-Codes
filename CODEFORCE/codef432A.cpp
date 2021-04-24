#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,t,sum;
   scanf("%d %d %d",&n,&k,&t);
   if(n<=t){
    sum=n-(t-k);
   }
   else if(k>=t){
    sum=t;
   }
   else{
    sum=t-(t-k);
   }
   printf("%d",sum);
   return 0;
}
