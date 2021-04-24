#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int k,n,s,p,x,y,z,a,b;
   cin>>k>>n>>s>>p;
   x=n%s;
   if(x!=0){
    y=(n/s)+1;
   }
   else{
    y=n/s;
   }
   z=y*k;
   a=z%p;
   if(a!=0){
    b=(z/p)+1;
   }
   else{
    b=z/p;
   }
   cout<<b<<endl;
   return 0;
}
