#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define val 100000
int main(){
   int i,j,a[val],m,n,l,k,x,y,p;
   for(i=6;i<100000;i++){
    l=0;p=i;y=1;x=i;k=0;
    while(p>0){
        j=p%2;
        p=p/2;
        a[l]=j;
        if(a[l]==1){
            k++;}
        else if(a[l]==0&&a[l-1]==1)
        {  y=0;
            break;}
        l++;
    }
    if(y==1){
        m=(pow(2,k)-1)*(pow(2,(k-1)));
        if(m==x){
            printf("%d\n",m);
        }
    }
   }
   return 0;
}

