#include<bits/stdc++.h>
using namespace std;
int main(){
   double y;int x=0,n,m,n1,j=1;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%d",&m);
    if(j==1&&m<0){n1=m;j=0;}
    if(n1<=m&&m<0)
        {n1=m;}
    else{
    y=(int)sqrt((m));

    if(y*y!=m){
        if(x<m){
            x=m;
        }
    }
   }}
   if(x!=0)
    printf("%d\n",x);
   else
   printf("%d\n",n1);
   return 0;
}
