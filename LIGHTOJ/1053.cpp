#include<bits/stdc++.h>
using namespace std;
int main(){
long long int l1,l2,l3,i,j,k=0,test;
scanf("%d",&test);
while(test--){
scanf("%lld%lld%lld",&l1,&l2,&l3);

if(l1>l2&&l1>l3){
 i=l1*l1;j=l2*l2+l3*l3;
}
else if(l2>l1&&l2>l3){
    i=l2*l2;j=l1*l1+l3*l3;
}
else if(l3>l1&&l3>l2){
  i=l3*l3;j=l1*l1+l2*l2;
}
k++;
if(i==j)
    printf("Case %d: yes\n",k);
else
    printf("Case %d: no\n",k);}
    return 0;
}
