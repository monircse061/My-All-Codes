#include<bits/stdc++.h>
using namespace std;
#define val 100000
int main(){
   int i,n,a[val],s[val],j=1;
   scanf("%d",&n);
   for(i=2;i<=n;i++){
    scanf("%d",&a[i]);
   }
   for(i=1;i<=n;i++){
    scanf("%d",&s[i]);
   }
   for(i=2;i<=n;i++){
    if(s[i]!=s[a[i]])
        {j++;}
   }
   printf("%d",j);
   return 0;
}
