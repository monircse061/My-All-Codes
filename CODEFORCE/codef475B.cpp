#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,A,B,C,t,sum=0,a[100000];
  cin>>n>>A>>B>>C>>t;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  if(B>=C){
    sum=A*n;
  }
  else{
    for(int i=0;i<n;i++){
        sum=sum+A-((t-a[i])*B)+((t-a[i])*C);
    }
  }
  cout<<sum<<endl;
  return 0;
}
