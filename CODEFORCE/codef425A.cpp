#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,k,n1;
   scanf("%I64d %I64d",&n,&k);
   n1=n/k;
   if(n1%2==0){
    printf("NO");
   }
   else{
    printf("YES");
   }
   return 0;
}
