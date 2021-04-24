#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,i,j,s,s1,x,l;
  scanf("%d",&t);
  while(t--){
  scanf("%d",&x);
  l=1;
  if(x%3==0||x%7==0){l=0;}
  for(i=1;i<=15&&l==1;i++){
    for(j=1;j<=33;j++){
        //s=7*i;
       // if(s==x){j==0;break;}
        s=(7*i)+(3*j);
         if(s==x){l=0;break;}
    }if(l==0){break;}
  }
  if(l==0){
  printf("YES\n");}
  else
    {printf("NO\n");}
  }
  return 0;
}
