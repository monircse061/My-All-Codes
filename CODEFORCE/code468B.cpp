#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,n1,n2,s,l,j,h,x,m,p;
   scanf("%d %d %d",&n,&n1,&n2);
   x=log2(n);l=1;h=n;s=x;
   if(n1>n2){
    p=n1;
    n1=n2;
    n2=p;
   }
   while(1){
    m=(l+h)/2;
    if(n1<=m&&n2>m){
            if(x==s)
        {cout<<"Final!"<<endl;}
    else
        {cout<<x<<endl;}
        break;
    }
    else if(n1>m&&n2>m){
        l=m+1;
    }
    else if(n1<m&&n2<=m){
        h=m-1;
    }x--;
   }
  return 0;
}
