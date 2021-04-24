#include<bits/stdc++.h>
using namespace std;
#define val 1000005
double a[val];
int main(){
   int i=0,j=0,t,m,n;
   for(i=1;i<=val;i++){
    a[i]=a[i-1]+log(i);
   }
   scanf("%d",&t);
   while(t--){
   scanf("%d %d",&m,&n);
   j++;
   printf("Case %d: %.lf\n",j,floor(a[m]/(log(n)))+1);}
   return 0;
}
