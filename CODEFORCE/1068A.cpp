#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ll n,m,k,l,res;
  scanf("%I64d %I64d %I64d %I64d",&n,&m,&k,&l);
  res=n-k;
  if(res<l){
    printf("-1\n");
  }
  else if(n/m==0){
    printf("-1\n");
  }
  else{
    printf("%I64d\n",n/m);
  }
  main();
  return 0;
}
