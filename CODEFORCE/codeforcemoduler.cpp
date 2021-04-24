#include<bits/stdc++.h>
using namespace std;
long long int x,y=1,n,m,i,j;
int main(){

    scanf("%I64d %I64d",&n,&m);
    if(n>=m)
        x=m;
    else
    {
        for(i=1;i<=n;i++){
            y=y*2;
            if(y>m){break;}
        }
        x=m%y;
    }
   printf("%I64d\n",x);
   return 0;
}
