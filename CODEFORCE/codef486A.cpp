#include<bits/stdc++.h>
using namespace std;
int cont[1000];
int main(){
  int n,k,a[1000],b[1000],j=0,sum=0;
  scanf("%d %d",&n,&k);
  for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
    cont[a[i]]++;
  }
  for(int i=1;i<=n;i++){
    if(cont[a[i]]!=0){
        sum++;
        cont[a[i]]=0;
        b[j]=i;
        j++;
    }
    if(sum==k){
        break;
    }
  }
  if(sum==k){
         cout<<"YES"<<endl;
        for(int i=0;i<j;i++){
            printf("%d ",b[i]);
        }
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}
