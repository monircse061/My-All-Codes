#include<bits/stdc++.h>
using namespace std;
#define val 1000000
long long int a[val],c[val];
int main(){
   long long int n,x,y;
   scanf("%lld",&n);
   for(int i=0;i<n*2;i++){
    scanf("%lld",&a[i]);
    c[a[i]]++;
    if(i==0){
        x=c[a[i]];
        y=a[i];
        continue;
    }
    if(x<c[a[i]]){
        y=a[i];
    }
   }
   //for(int i=0;i<n*2;i++){
    //if(i==0){
       // x=c[]
    //}
  // }
  cout<<y<<endl;
  return 0;
}
