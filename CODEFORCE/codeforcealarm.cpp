#include<bits/stdc++.h>
using namespace std;
int main(){
   int l,x,y,i=0,n,l1;
   scanf("%d %d %d",&n,&x,&y);
   while(1){
    l=y%10;l1=x%10;
    if(l==7||l1==7){printf("%d\n",i);break;}

    if(y<n){
        y=y+60;x--;
    }
     y=y-n;
     if(x<=0){x=x+24;}
    i++;
   }

   return 0;
}
