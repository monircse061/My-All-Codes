#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,l=0,m;
   scanf("%I64d",&n);
   for(int i=1;i<n;i++){
    if((n-i)%i==0)
        l++;
        if(i>(n/2))
            break;
   }
   cout<<l<<endl;
   return 0;
}
