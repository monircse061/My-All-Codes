#include<bits/stdc++.h>
using namespace std;
int a[10000],b[10000];
int main(){
   int n,m,l,r,d;
   scanf("%d %d",&n,&m);
   for(int i=0;i<m*2;i+=2){
    scanf("%d %d",&l,&r);
    //b[i]=l;b[i+1]=r;

    //a[i+1]=1;a[i+2]=d-1;
    }

   /**for(int i=0;i<m*2;i+=2){
        d=(b[i+1]-b[i]+1)/2;
    for(int j=b[i];j<=b[i+1];j++){
        if(a[j]==0&&d>0){
            a[j]=1;
        }
        else if(a[j]==0){
            a[j]=2;
        }
   if(a[j]==1){
    d--;
   }
    }
   }**/
   //for(int i=0;i<)
   for(int i=1;i<=n;i++){
    if(i%2==0){
        cout<<0;
    }
    else{
        cout<<1;
    }
   }
   return 0;
}
