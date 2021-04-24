#include<bits/stdc++.h>
using namespace std;
int m[10000],a[10000];
int main(){
   int n,cont=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]!=0){
      if(m[a[i]]==0){
        m[a[i]]++;cont++;
      }
    }
   }
   cout<<cont;
   return 0;
}
