#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,a[100009],d;
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
 }
 int j=1,i=2,ans=0,k=1;
 while(j<i&&i<=n){
    d=a[i]-a[j];
    //cout<<d<<" ";
    if(ans<d){
        ans=max(d,ans);
        if(k<i-j+1){
            k=i-j+1;
        }
         //i++;
    }
    else{
        j=i;
        ans=0;
    }
    //if(i==j)
        i++;

 }
 printf("%d",k);
 return 0;
}
