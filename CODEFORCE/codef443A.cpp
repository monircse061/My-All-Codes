#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[10000],b[10000],y,sum,z,n,x;
  cin>>n;
  for(int i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
  }
  for(int i=0;i<n;i++){
    if(i==0){
        x=a[i];
        continue;
    }
    if(a[i]>x){
        x=a[i];
    }
    else{
        sum=a[i];y=b[i];
        while(1){
            sum+=y;
            if(sum>x){
                x=sum;
                break;
            }
        }
    }
  }
  cout<<x<<endl;
  return 0;
}
