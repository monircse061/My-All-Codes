#include<bits/stdc++.h>
using namespace std;
#define val 100000
int main(){
   int n,a[val],j=1,i=1,x1=0,x2=1,x3;
   scanf("%d",&n);
   while(1){
    x3=x1+x2;
    if(x3>n){break;}
    a[i]=x3;
    i++;
    x1=x2;x2=x3;
   }
   for(i=1;i<=n;i++){
    if(a[j]==i)
        {j++;printf("O");}
    else
        printf("o");
   }
}
