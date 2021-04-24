#include<bits/stdc++.h>
using namespace std;
long long int cont[10000009];
int main(){
   long long int n,a[10000],Count=0,x;
   scanf("%I64d",&n);
   for(int i=1;i<=2*n;i++){
    scanf("%I64d",&a[i]);
    cont[a[i]]++;
   }
   for(int i=1;i<=n;i++){
    for(int j=n+1;j<=2*n;j++){
        x=a[i]^a[j];
        if(cont[x]==1){
        cont[x]++;}
        if(cont[x]>=2){
            Count++;
        }
    }
   }
   if(Count%2==0){
    printf("Karen\n");
   }
   else{
    printf("Koyomi\n");
   }

   return 0;
}
